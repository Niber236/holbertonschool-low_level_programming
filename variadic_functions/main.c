#include "variadic_functions.h"

int main(void)
{
    /* Test de base */
    print_all("ceis", 'B', 3, "stSchool");

    /* Test avec NULL string */
    print_all("s", NULL);

    /* Test avec float */
    print_all("f", 3.14159);

    /* Test avec int et char */
    print_all("ic", 42, 'X');

    /* Test avec séparateurs et plusieurs types */
    print_all("csif", 'A', "Hello", 99, 2.71828);

    /* Test avec types inconnus (doit être ignoré) */
    print_all("abcdez", 'Z', 100, 1.23, "test", 42, 'Y');

    return 0;
}
