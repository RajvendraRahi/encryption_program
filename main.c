// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
//#include <iostream>
char userinput[100], ch;
char word;
int userkey[];
//int casee[3] = {0 , 1 ,2};
//int randomtest[3] = {1, 2, 3};
char rawkey[100] =
  { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' ,'A','B','C','D','E','F','G','H','I','J','K','L','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
      1,2,3,4,5,6,7,8,9,0
  };
int key[100];
char hash[100];
char rawhash[100] = { 'h', 'g', 'x', 'f', 't', '@', '$', '%', 'b', 'l', '0' };

int check = 0;


int
methord (char word, char userinput, int index)
{



  for (int i = 0; i <= strlen (rawkey); i++)
    {
      if (userinput == rawkey[i])
	{

	  //printf("%d" , key[i]);
	  hash[i] = rawhash[key[i]];
	  printf ("%c", hash[i]);


	}




    }

}

int
main ()
{

  srand (time (NULL));

  if (check == 0)
    {


      for (int i = 0; i < strlen (rawkey); i++)
	{
	  key[i] = rand () % strlen (rawhash);
	  printf ("%d", key[i]);

	}
	 printf("\n ^^^^this is a unique key genrated for ur input");
	 
	input();
	
	
	
    }
    else{
         checkpass ();
    }

 


}

int
changearray ()
{

  if (check == 1)
    {
      for (int i = 0; i < strlen (key); i++)
	{
	  userkey[i] = key[i];

	}
      for (int i = 0; i <= 27; i++)
	{
	  //key[i] = rand() % 9 + 1;
	  printf ("%d", key[i]);

	}
    }

  main ();

}

int
input ()
{
    check = 1;
  printf ("\n enter_password(enter anything to encrypt): ");
  gets (userinput);

  int arraysize = strlen (userinput);
  //printf("\nYou've entered: %s", userinput);
  for (int i = 0; i <= arraysize; i++)
    {
      word = userinput[i];

      //printf("\n%c" , word);


      methord (word, userinput[i], i);
    }
    printf ("\n ^^^^this is the encryption of ur input: ");
  printf ("\n enter_key(the key which is genrated): ");
  gets (userkey);
  if (strlen (userkey) < strlen (rawkey))
    {
      check = 0;

    }
  changearray ();

}

int
checkpass ()
{
  printf ("\n enter_password_again to check encryption : ");
  gets (userinput);

  int arraysize = strlen (userinput);
  //printf("\nYou've entered: %s", userinput);
  for (int i = 0; i <= arraysize; i++)
    {
      word = userinput[i];

      //printf("\n%c" , word);


      methord (word, userinput[i], i);
    }
    printf ("\n ^^^^this is the encryption of ur input: ");
  printf ("\n enter_key(the key which is genrated): ");
  gets (userkey);
  if (strlen (userkey) < strlen (rawkey))
    {
      check = 0;

    }
  changearray ();

}
