/**
* _isupper - Vérifie si un caractère est une majuscule (A-Z)
* @c: caractère à tester
* Return: 1 si majuscule, 0 sinon
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
