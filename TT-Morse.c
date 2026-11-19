#include <stdio.h>
#include <Windows.h>
#include <string.h>
char text[2000];
char morsetext[10000];
int sel;
int x = 0;
int m;
int WPM = 20;
int frequency = 600;
int TTMS(void);
int Beepify(int, int);
int wrongletter = 0;
const char * MORSE_LETTERS[26] = 
{
	".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",  "....", "..",
	".---", "-.-",  ".-..", "--",   "-.",   "---",  ".--.", "--.-", ".-.",
	"...",  "-",    "..-",  "...-", ".--",  "-..-", "-.--", "--.."
};

int TTMS(void)
{
	m = 0;
	for(x = 0; x < 10000; x++)
	{
		morsetext[x] = '\0';
	}
	wrongletter = 0;
	for (x = 0; x < 2000; x++)
	{

		if (text[x] == '\0')
			break;

		else if (text[x] == ' ') {}
		else if (text[x] == 'a' || text[x] == 'A')
		{
			morsetext[m] = '.';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'b' || text[x] == 'B')
		{
			morsetext[m] = '-';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'c' || text[x] == 'C')
		{
			morsetext[m] = '-';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'd' || text[x] == 'D')
		{
			morsetext[m] = '-';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '/';
			m++;

		}
		else if (text[x] == 'e' || text[x] == 'E')
		{
			morsetext[m] = '.';
			m++;
			morsetext[m] = '/';
			m++;

		}
		else if (text[x] == 'f' || text[x] == 'F')
		{
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'g' || text[x] == 'G')
		{
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'h' || text[x] == 'H')
		{
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'i' || text[x] == 'I')
		{
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'j' || text[x] == 'J')
		{
			morsetext[m] = '.';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'k' || text[x] == 'K')
		{
			morsetext[m] = '-';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'l' || text[x] == 'L')
		{
			morsetext[m] = '.';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'm' || text[x] == 'M')
		{
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'n' || text[x] == 'N')
		{
			morsetext[m] = '-';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'o' || text[x] == 'O')
		{
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'p' || text[x] == 'P')
		{
			morsetext[m] = '.';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'q' || text[x] == 'Q')
		{
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'r' || text[x] == 'R')
		{
			morsetext[m] = '.';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 's' || text[x] == 'S')
		{
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 't' || text[x] == 'T')
		{
			morsetext[m] = '-';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'u' || text[x] == 'U')
		{
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'v' || text[x] == 'V')
		{
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'w' || text[x] == 'W')
		{
			morsetext[m] = '.';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'x' || text[x] == 'X')
		{
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'y' || text[x] == 'Y')
		{
			morsetext[m] = '-';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == 'z' || text[x] == 'Z')
		{
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == '0')
		{
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == '1')
		{
			morsetext[m] = '.';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == '2')
		{
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == '3')
		{
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == '4')
		{
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == '5')
		{
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == '6')
		{
			morsetext[m] = '-';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == '7')
		{
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == '8')
		{
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else if (text[x] == '9')
		{
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '-';
			m++;
			morsetext[m] = '.';
			m++;
			morsetext[m] = '/';
			m++;
		}
		else
        {
			wrongletter = 1;
		}
	}
	if(wrongletter == 1)
	{
		printf("\nThis sentence contains some letters that are not available in the morse alphabet.These letters will be skipped...");
	}
	printf("\n\nWrite the WPM(words per minute) value:");
	if (scanf_s("%d", &WPM) == 1 && WPM > 0)
	{
		while (sel != 2)
		{
			
			printf("\nThe audio is ready to play!\n1)Play\n2)Quit\nYour Selection:");
			scanf_s("%d", &sel);
			if (sel == 1)
			{
				Beepify(WPM, frequency);
				system("cls");
			}
			else if(sel == 2)
			{
			}
			else
			{
				printf("Non-valid selection!");
				Sleep(3000);
				system("cls");
			}

		}

			

	}
	else
	{
		system("cls");
		printf("Enter a valid entry!");
		Sleep(3000);
		return 0;
	}
		
	
}
int Beepify(int WPM, int freq)
{
	int a = 0;
	int unitd;
	unitd = 1200 / WPM;
	for(a = 0; a < 10000; a++)
	{
	    if(morsetext[a] == '/')
		{
			Sleep(2 * unitd);
		}
		else if(morsetext[a] == ' ')
		{
			Sleep(4 * unitd);
		}
		else if(morsetext[a] == '.')
		{
			Beep(freq, unitd);
			Sleep(unitd);
		}
		else if(morsetext[a] == '-')
		{
			Beep(freq, 3 * unitd);
			Sleep(unitd);
		}
		else if(morsetext[a] == '\0')
		{
			Sleep(1000);
			break;
		}
	}
	return 1;

}

int main(void)
{
	while(1)
	{
		
		system("cls");
		printf("\t\t __________________________________________________________________");
		printf("\n\t\t|                        Text-To-Morse                             |");
		printf("\n\t\t|    Made By Emre Macin                                            |");
		printf("\n\t\t|                                                                  |");
		printf("\n\t\t|    Select an Option:                                             |");
		printf("\n\t\t|    1)Turn text into a audible morse code                         |");
		printf("\n\t\t|    2)Turn morse code into a text(coming soon!)                   |");
		printf("\n\t\t|                                                                  |");
		printf("\n\t\t ------------------------------------------------------------------");
		printf("\nYour selection:");
		if(scanf_s("%d", &sel) == 1)
		{
			if (sel == 1)
			{
				int m = 0;
				system("cls");
				printf("Write the text below...\n");
				scanf_s(" %1999[^\n]", text, (unsigned)sizeof(text));
				printf("\nThe translated text is:\n");
				for (x = 0; x < 2000; x++)
				{
					if (text[x] == '\0')
						break;

					if (text[x] == ' ')
					{

					}

					else
					{
						if (text[x] == '0')
						{
							printf("-----/");
						}
						else if (text[x] == '1')
						{
							printf(".----/");
						}
						else if (text[x] == '2')
						{
							printf("..---/");
						}
						else if (text[x] == '3')
						{
							printf("...--/");
						}
						else if (text[x] == '4')
						{
							printf("....-/");
						}
						else if (text[x] == '5')
						{
							printf("...../");
						}
						else if (text[x] == '6')
						{
							printf("-..../");
						}
						else if (text[x] == '7')
						{
							printf("--.../");
						}
						else if (text[x] == '8')
						{
							printf("---../");
						}
						else if (text[x] == '9')
						{
							printf("----./");
						}
						else
						{
							if (text[x + 1] == '\0')
								printf("%s", text[x] < 'a' ? MORSE_LETTERS[text[x] - 'A'] : MORSE_LETTERS[text[x] - 'a']);
							else
								printf("%s/", text[x] < 'a' ? MORSE_LETTERS[text[x] - 'A'] : MORSE_LETTERS[text[x] - 'a']);
						}

					}
				}
				TTMS();
		    }
			else if(sel == 2)
			{
				printf("\n\nThis mode is not available yet!");
				Sleep(3000);
			}
			else
			{
				system("cls");
				printf("Enter a valid entry!");
				Sleep(3000);
			}
		
		}
		else
		{
			system("cls");
			printf("Enter a valid entry!");
			Sleep(3000);
			break;
		}

	}
	
}