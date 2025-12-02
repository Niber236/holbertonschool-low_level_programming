#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - lit un fichier et l'affiche sur stdout
 * @filename: nom du fichier
 * @letters: nombre de lettres à lire
 *
 * Return: nombre de lettres lues et affichées, ou 0 si erreur
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t r, w;
int fd;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}

r = read(fd, buffer, letters);
if (r == -1)
{
free(buffer);
close(fd);
return (0);
}

w = write(STDOUT_FILENO, buffer, r);
if (w == -1 || w != r)
{
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);
return (w);
}
