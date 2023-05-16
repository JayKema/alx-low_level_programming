#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PASSWORD_LENGTH 10
/**
 * generateRandomChar - generate random char
 *
 * Return: random letter or number
 */
char generateRandomChar(void)
{
	int randomNum = rand() % 62; /*Generates a random number between 0 and 61*/

	if (randomNum < 26)
		return ('A' + randomNum); /*Uppercase letters (A-Z)*/
	else if (randomNum < 52)
		return ('a' + randomNum - 26); /*Lowercase letters (a-z)*/
	else
		return ('0' + randomNum - 52); /*Digits (0-9)*/
}
/**
 * generateRandomPassword - generate random password of length 1 to 10
 * @password: pointer for holding password
 *
 * Return: password of arbitrary length
 */
void generateRandomPassword(char *password)
{
	int length = rand() % MAX_PASSWORD_LENGTH + 1;
	int i;

	for (i = 0; i < length; i++)
	{
		password[i] = generateRandomChar();
	}
	password[length] = '\0'; /*Null-terminate the password string*/
}
/**
 * main - module entry pont
 *
 * Return: EXIT_SUCCESS
 */
int main(void)
{
	char password[MAX_PASSWORD_LENGTH + 1];
	srand(time(NULL)); /*Initialize the rand with the current time*/

	generateRandomPassword(password);
	fputs(password, stdout);
	return (EXIT_SUCCESS);
}
