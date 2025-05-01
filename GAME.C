//top,left=character
//topOB,leftOB=obstecal
#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main()
{
   int introCounter=0, introTop=5, introLeft=7;
   int BrCounter=0, BrTop=1, BrLeft=1;
   int counter=0, top=20, top1=21, top2=22, left=37, jump=0, offSet=0;
   int metter=0, score=0, topOb=21, leftOb=70, topOb2=22 ,leftOb2=70, lag=40, index=0;
   char ch;
   clrscr();
   _setcursortype(_NOCURSOR);
   while(1)
   {
	  while(BrCounter<210)
	  {
		if(BrCounter<25)
		{
				gotoxy(BrLeft,BrTop);
				printf("%c",176);
				BrTop++;
				BrCounter++;
		}
		else if(BrCounter<104)
		{
				gotoxy(BrLeft,BrTop);
				printf("%c",178);
				BrLeft++;
				BrCounter++;
		}
		else if(BrCounter<129)
		{
				gotoxy(BrLeft,BrTop);
				printf("%c",176);
				BrTop--;
				BrCounter++;
		}
		else if(BrCounter<210)
		{
				gotoxy(BrLeft,BrTop);
				printf("%c",176);
				BrLeft--;
				BrCounter++;
		}
   }
   //W
   while(introCounter<20)
   {
		if(introCounter<4)
		{
				 gotoxy(introLeft,introTop);
				 printf("*");
				 introLeft++;
				 introTop++;
		}
		else if(introCounter<7)
		{
				 gotoxy(introLeft,introTop);
				 printf("*");
				 introLeft++;
				 introTop--;
		}
		else if(introCounter<10)
		{
				 gotoxy(introLeft,introTop);
				 printf("*");
				 introLeft++;
				 introTop++;
		}
		else if(introCounter<15)
		{
				 gotoxy(introLeft,introTop);
			 printf("*");
			 introLeft++;
			 introTop--;
	   }
	   introCounter++;
   }
   //E
   introCounter=0;
   introLeft=28;
   introTop=5;
   while(introCounter<17)
   {
		 if(introCounter==13)
		 {
			 introTop=7;
			 introLeft=24;
		 }
		 if(introCounter<4)
		 {
			 gotoxy(introLeft,introTop);
			 printf("*");
			 introLeft--;
		 }
		 else if(introCounter<8)
		 {
			 gotoxy(introLeft,introTop);
			 printf("*");
			 introTop++;
		 }
		 else if(introCounter<13)
		 {
			 gotoxy(introLeft,introTop);
			 printf("*");
			 introLeft++;
		 }
		 else if(introCounter<17)
		 {
			 gotoxy(introLeft,introTop);
			 printf("*");
			 introLeft++;
		 }
		 introCounter++;
   }
   //L
   introCounter=0;
   introLeft=32;
   introTop=5;
   while(introCounter<9)
   {
	   if(introCounter<4)
	   {
			 gotoxy(introLeft,introTop);
			 printf("*");
			 introTop++;
	   }
	   else if(introCounter<9)
	   {
			 gotoxy(introLeft,introTop);
			 printf("*");
			 introLeft++;
	   }
	   introCounter++;
   }
   //C
   introCounter=0;
   introLeft=44;
   introTop=6;
   while(introCounter<15)
   {
		 if(introCounter<1)
		 {
			 introTop--;
			 introLeft--;
			 gotoxy(introLeft,introTop);
			 printf("*");
		 }
		 else if(introCounter<5)
		 {
			 gotoxy(introLeft,introTop);
			 printf("*");
			 introLeft--;
		 }
		 else if(introCounter<9)
		 {
			 gotoxy(introLeft,introTop);
			 printf("*");
			 introTop++;
		 }
		 else if(introCounter<14)
		 {
			 gotoxy(introLeft,introTop);
			 printf("*");
			 introLeft++;
		 }
		 else if(introCounter<15)
		 {
			 introTop--;
			 gotoxy(introLeft,introTop);
			 printf("*");
		 }
		 introCounter++;
   }
   //O
   introCounter=0;
   introLeft=52;
   introTop=5;
   while(introCounter<16)
   {
		 if(introCounter<4)
		 {
			 gotoxy(introLeft,introTop);
			 printf("*");
			 introLeft--;
		 }
		 else if(introCounter<8)
		 {
			 gotoxy(introLeft,introTop);
			 printf("*");
			 introTop++;
		 }
		 else if(introCounter<12)
		 {
			 gotoxy(introLeft,introTop);
			 printf("*");
			 introLeft++;
		 }
		 else if(introCounter<16)
		 {
			 gotoxy(introLeft,introTop);
			 printf("*");
			 introTop--;
		 }
		 introCounter++;
   }
   //M
   introCounter=0;
   introLeft=62;
   introTop=9;
   while(introCounter<16)
   {
		 if(introCounter<4)
		 {

			 gotoxy(introLeft,introTop);
			 printf("*");
			 introTop--;
		 }
		 else if(introCounter<7)
		 {
			 gotoxy(introLeft,introTop);
			 printf("*");
			 introTop++;
			 introLeft--;
		 }
		 else if(introCounter<10)
		 {
			 gotoxy(introLeft,introTop);
			 printf("*");
			 introTop--;
			 introLeft--;
		 }
		 else if(introCounter<15)
		 {
			 gotoxy(introLeft,introTop);
			 printf("*");
			 introTop++;
		 }
		 introCounter++;
   }
   //E
   introCounter=0;
   introLeft=70;
   introTop=5;
   while(introCounter<17)
   {
		 if(introCounter==13)
		 {
			 introTop=7;
			 introLeft=66;
		 }
		 if(introCounter<4)
		 {
			 gotoxy(introLeft,introTop);
			 printf("*");
			 introLeft--;
		 }
		 else if(introCounter<8)
		 {
			 gotoxy(introLeft,introTop);
			 printf("*");
			 introTop++;
		 }
		 else if(introCounter<13)
		 {
			 gotoxy(introLeft,introTop);
			 printf("*");
			 introLeft++;
		 }
		 else if(introCounter<17)
		 {
			 gotoxy(introLeft,introTop);
			 printf("*");
			 introLeft++;
		 }
		 introCounter++;
   }
   introLeft=30;
   introTop=15;
   gotoxy(introLeft,introTop);
   printf("Press Y to start the game");
   introTop++;
   gotoxy(introLeft,introTop);
   printf("Press X to exit the game");
   introTop=20;
   introLeft=35;
   gotoxy(introLeft,introTop);
   printf("Press N to jump");
   if(kbhit())
   {
		   ch=getch();
		   if(ch=='Y'||ch=='y')
		   {
				index++;
				break;
		   }
		   if(ch=='X'||ch=='x')
		   {
				break;
		   }
   }
   }
   clrscr();
   BrCounter=0;
   BrLeft=1;
   BrTop=1;
   while(BrCounter<210)
   {
	   if(BrCounter<25)
	   {
			gotoxy(BrLeft,BrTop);
			printf("%c",176);
			BrTop++;
			BrCounter++;
	   }
	   else if(BrCounter<104)
	   {
			gotoxy(BrLeft,BrTop);
			printf("%c",178);
			BrLeft++;
			BrCounter++;
	   }
	   else if(BrCounter<129)
	   {
			gotoxy(BrLeft,BrTop);
			printf("%c",176);
			BrTop--;
			BrCounter++;
	   }
	   else if(BrCounter<210)
	   {
			gotoxy(BrLeft,BrTop);
			printf("%c",176);
			BrLeft--;
			BrCounter++;
		}
   }
   while(index==1)
   {
	   if(leftOb==1)
	   {
			  leftOb=70;
	   }
	   if(leftOb2==1)
	   {
			  leftOb2=70;
	   }
	   if(kbhit())
	   {
			  ch=getch();
			  if(ch=='n'||ch=='N')
				  jump=1;
			  if(ch=='x'||ch=='X')
				  break;
	   }
	   gotoxy(2,2);
	   printf("Score  :%d",score);
	   gotoxy(2,3);
	   printf("Metter :%d",metter);
	   gotoxy(left,20);
	   printf(" (**) ");
	   gotoxy(left,21);
	   printf(" /||\\");
	   gotoxy(left,22);
	   printf("  !!  ");

	   //obstacle//

		if(score<=7)
		{
			gotoxy(leftOb,topOb);
			printf("<0><");
			delay(lag);
			gotoxy(leftOb,topOb);
			printf("    ");
			leftOb--;
		}
		else if(score>7 && score<=16)
		{
			gotoxy(leftOb,topOb);
			printf("<0><");
			if(offSet<50)
			{
				  delay(lag);
			}
			else if(offSet>=50)
			{
				   gotoxy(leftOb2,topOb2);
				   printf("<0><");
				   delay(lag);
				   gotoxy(leftOb2,topOb2);
				   printf("    ");
				   leftOb2--;
			}
			gotoxy(leftOb,topOb);
			printf("    ");
			leftOb--;
			offSet++;
		}
		else if(score>16 && score<=25)
		{
			gotoxy(leftOb,topOb);
			printf("<0><");
			if(offSet<50)
			{
				  delay(lag-5);
			}
			else if(offSet>=50)
			{
				   gotoxy(leftOb2,topOb2);
				   printf("<0><");
				   delay(lag-5);
				   gotoxy(leftOb2,topOb2);
				   printf("    ");
				   leftOb2--;
			}
			gotoxy(leftOb,topOb);
			printf("    ");
			leftOb--;
			offSet++;
	    }
		else if(score>25)
		{
			gotoxy(leftOb,topOb);
			printf("<0><");
			if(offSet<50)
			{
				  delay(lag-10);
			}
			else if(offSet>=50)
			{
				   gotoxy(leftOb2,topOb2);
				   printf("<0><");
				   delay(lag-10);
				   gotoxy(leftOb2,topOb2);
				   printf("    ");
				   leftOb2--;
			}
			gotoxy(leftOb,topOb);
			printf("    ");
			leftOb--;
			offSet++;
	    }
	    //object1
	   if(left+4==leftOb&&top1==topOb)
	   {
			  gotoxy(37,13);
			  printf("GAME OVER");
			  gotoxy(left,top);
			  printf(" (--) ");
			  gotoxy(left,top1);
              printf(" /||\\");
              gotoxy(left,top2);
              printf("  !!  ");
			  break;
	   }
	   else if(leftOb>33 && leftOb<42)
	   {
		   if(top1==topOb || top2==topOb)
		   {
			  gotoxy(37,13);
			  printf("GAME OVER");
			  gotoxy(left,top);
			  printf(" (--) ");
			  gotoxy(left,top1);
			  printf(" /||\\");
			  gotoxy(left,top2);
			  printf("  !!  ");
			  break;
		   }

	   }

	   //object2
	   if(left+4==leftOb2&&top2==topOb2)
	   {
			  gotoxy(37,13);
			  printf("GAME OVER");
			  gotoxy(left,top);
			  printf(" (--) ");
			  gotoxy(left,top1);
			  printf(" /||\\");
			  gotoxy(left,top2);
			  printf("  !!  ");
			  break;
	   }
	   else if(leftOb2>33 && leftOb2<42)
	   {
		   if(top1==topOb || top2==topOb)
		   {
			  gotoxy(37,13);
			  printf("GAME OVER");
			  gotoxy(left,top);
			  printf(" (--) ");
			  gotoxy(left,top1);
			  printf(" /||\\");
			  gotoxy(left,top2);
			  printf("  !!  ");
			  break;
		   }

	   }
	   else
	   {
			  metter++;
	   }
	   if(jump>0)
	   {
		   if(score<=7)
		   {
			  while(counter<6)
			  {
				   gotoxy(left,top);
				   printf("      ");
				   gotoxy(left,top1);
				   printf("      ");
				   gotoxy(left,top2);
				   printf("      ");
				   top--;
				   top1--;
				   top2--;
				   gotoxy(left,top);
				   printf(" (**) ");
				   gotoxy(left,top1);
				   printf(" /||\\");
				   gotoxy(left,top2);
				   printf("  !!  ");
				   gotoxy(leftOb,topOb);
				   printf("<0><");
				   delay(lag);
				   gotoxy(leftOb,topOb);
				   printf("    ");
				   leftOb--;
				   counter++;
			   }
			   counter=0;
			   while(counter<6)
			   {
				   gotoxy(left,top);
				   printf("      ");
				   gotoxy(left,top1);
				   printf("      ");
				   gotoxy(left,top2);
				   printf("      ");
				   top++;
				   top1++;
				   top2++;
				   gotoxy(left,top);
				   printf(" (**) ");
				   gotoxy(left,top1);
				   printf(" /||\\");
				   gotoxy(left,top2);
				   printf("  !!  ");
				   gotoxy(leftOb,topOb);
				   printf("<0><");
				   delay(lag);
				   gotoxy(leftOb,topOb);
				   printf("    ");
				   leftOb--;
				   counter++;
			   }
			}
			else if(score>7 && score<=16)
			{
					while(counter<6)
					{
					   gotoxy(left,top);
					   printf("      ");
					   gotoxy(left,top1);
					   printf("      ");
					   gotoxy(left,top2);
					   printf("      ");
					   top--;
					   top1--;
					   top2--;
					   gotoxy(left,top);
					   printf(" (**) ");
					   gotoxy(left,top1);
				   	   printf(" /||\\");
					   gotoxy(left,top2);
					   printf("  !!  ");
					   gotoxy(leftOb,topOb);
					   printf("<0><");
		    			if(offSet<50)
						{
						  delay(lag);
						}
						else if(offSet>=50)
					    {
						   gotoxy(leftOb2,topOb2);
						   printf("<0><");
						   delay(lag);
						   gotoxy(leftOb2,topOb2);
						   printf("    ");
						   leftOb2--;
					    }
					   gotoxy(leftOb,topOb);
					   printf("    ");
					   leftOb--;
					   counter++;
					}
					counter=0;
					while(counter<6)
					{
					   gotoxy(left,top);
					   printf("      ");
				       gotoxy(left,top1);
					   printf("      ");
					   gotoxy(left,top2);
					   printf("      ");
					   top++;
					   top1++;
					   top2++;
					   gotoxy(left,top);
					   printf(" (**) ");
					   gotoxy(left,top1);
					   printf(" /||\\");
					   gotoxy(left,top2);
					   printf("  !!  ");
					   gotoxy(leftOb,topOb);
					   printf("<0><");
		    			if(offSet<50)
						{
						  delay(lag);
						}
						else if(offSet>=50)
					    {
						   gotoxy(leftOb2,topOb2);
						   printf("<0><");
						   delay(lag);
						   gotoxy(leftOb2,topOb2);
						   printf("    ");
						   leftOb2--;
					    }
					   gotoxy(leftOb,topOb);
					   printf("    ");
					   leftOb--;
					   counter++;
				    }
		   }
		   else if(score>16 && score<=25)
		   {
			while(counter<6)
			{
			   gotoxy(left,top);
			   printf("      ");
			   gotoxy(left,top1);
			   printf("      ");
			   gotoxy(left,top2);
			   printf("      ");
			   top--;
			   top1--;
			   top2--;
			   gotoxy(left,top);
			   printf(" (**) ");
			   gotoxy(left,top1);
			   printf(" /||\\");
			   gotoxy(left,top2);
			   printf("  !!  ");
			   gotoxy(leftOb,topOb);
			   printf("<0><");
				if(offSet<50)
				{
				  delay(lag-5);
				}
				else if(offSet>=50)
				{
				   gotoxy(leftOb2,topOb2);
				   printf("<0><");
				   delay(lag-5);
				   gotoxy(leftOb2,topOb2);
				   printf("    ");
				   leftOb2--;
				}
			   gotoxy(leftOb,topOb);
			   printf("    ");
			   leftOb--;
			   counter++;
			}
			counter=0;
			while(counter<6)
			{
			   gotoxy(left,top);
			   printf("      ");
			   gotoxy(left,top1);
			   printf("      ");
			   gotoxy(left,top2);
			   printf("      ");
			   top++;
			   top1++;
			   top2++;
			   gotoxy(left,top);
			   printf(" (**) ");
			   gotoxy(left,top1);
			   printf(" /||\\");
			   gotoxy(left,top2);
			   printf("  !!  ");
			   gotoxy(leftOb,topOb);
			   printf("<0><");
				if(offSet<50)
				{
				  delay(lag-5);
				}
				else if(offSet>=50)
				{
				   gotoxy(leftOb2,topOb2);
				   printf("<0><");
				   delay(lag-5);
				   gotoxy(leftOb2,topOb2);
				   printf("    ");
				   leftOb2--;
				}
			   gotoxy(leftOb,topOb);
			   printf("    ");
			   leftOb--;
			   counter++;
			}
		   }
		   else if(score>25)
		   {
			while(counter<6)
			{
			   gotoxy(left,top);
			   printf("      ");
			   gotoxy(left,top1);
			   printf("      ");
			   gotoxy(left,top2);
			   printf("      ");
			   top--;
			   top1--;
			   top2--;
			   gotoxy(left,top);
			   printf(" (**) ");
			   gotoxy(left,top1);
			   printf(" /||\\");
			   gotoxy(left,top2);
			   printf("  !!  ");
			   gotoxy(leftOb,topOb);
			   printf("<0><");
				if(offSet<50)
				{
				  delay(lag-10);
				}
				else if(offSet>=50)
				{
				   gotoxy(leftOb2,topOb2);
				   printf("<0><");
				   delay(lag-10);
				   gotoxy(leftOb2,topOb2);
				   printf("    ");
				   leftOb2--;
				}
			   gotoxy(leftOb,topOb);
			   printf("    ");
			   leftOb--;
			   counter++;
			}
			counter=0;
			while(counter<6)
			{
			   gotoxy(left,top);
			   printf("      ");
			   gotoxy(left,top1);
			   printf("      ");
			   gotoxy(left,top2);
			   printf("      ");
			   top++;
			   top1++;
			   top2++;
			   gotoxy(left,top);
			   printf(" (**) ");
			   gotoxy(left,top1);
			   printf(" /||\\");
			   gotoxy(left,top2);
			   printf("  !!  ");
			   gotoxy(leftOb,topOb);
			   printf("<0><");
				if(offSet<50)
				{
				  delay(lag-10);
				}
				else if(offSet>=50)
				{
				   gotoxy(leftOb2,topOb2);
				   printf("<0><");
				   delay(lag-10);
				   gotoxy(leftOb2,topOb2);
				   printf("    ");
				   leftOb2--;
				}
			   gotoxy(leftOb,topOb);
			   printf("    ");
			   leftOb--;
			   counter++;
			}
		   }
		counter=0;
		jump=0;
	   }
	   if(leftOb==30)
       {
            score++;
       }
       if(leftOb2==30)
       {
            score++;
       }
	}
	gotoxy(37,13);
	printf("GAME OVER");
	getch();
	return 0;
}
