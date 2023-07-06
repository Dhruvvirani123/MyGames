#include<stdio.h>
main()
										//Question = 1//
{
	int i,n,j;
	for(j=0;j<=8;j++)
	{
		printf("*--");
	}
	printf("\n\n	i\n\n");
	for(j=0;j<=8;j++)
	{
		printf("*--");
	}
	printf("\n\n(1)First Question : \n");
	printf("Bahubali festival is related to... \n(1) Islam \n(2) Hinduism \n(3) Buddhism \n(4) Jainism\n ");
	
	printf("\nEnter Answer : ");
	scanf("%d",&n);
	for(i=1;i<=2;i++)
	{
		switch(i)
		{
			case 1:
			if(n==4)
			{
				printf("Your Answer is Absolute Right.... You Won $.100000cr.\n");
			}
			else
			{
				printf("Try Again..");
				printf("\nEnter Answer : ");
				scanf("%d",&n);
			if(n==4)
				{
					printf("Your Answer is Absolute Right.... You Won $.50000cr.\n");
				}
			else
				{
					printf("Game Over!!\n");
					printf("Answer is : (4) Jainism\n");
					printf("\n(Secound Person)\n");
				}
			}
		}
	}
     
    					//Question = 2//
    					
	printf("\n(2)Next Question : \n");
	printf("Who is the author of the book 'Amrit Ki Ore'? \n(1) Mukesh Kumar \n(2) Narendra Mohan \n(3) Upendra Nath \n(4) Nirad C. Choudhary\n ");
	printf("\nEnter Answer : ");
	scanf("%d",&n);
	for(i=1;i<=2;i++)
	{
		switch(i)
		{
			case 1:
			if(n==2)
			{
				printf("Your Answer is Absolute Right.... You Won $.100000cr.\n");
			}
			else
			{
				printf("Try Again..");
				printf("\nEnter Answer : ");
				scanf("%d",&n);
			if(n==2)
				{
					printf("Your Answer is Absolute Right.... You Won $.50000cr.\n");
				}
			else
				{
					printf("Game Over!!\n");
					printf("Answer is : (2) Narendra Mohan\n");
					printf("\n(Third Person)\n");
				}	
			}
		}
	}

						//Question = 3//
												
    printf("\n(3)Next Question : \n");
	printf("The Lalit Kala Academy is devoted to the promotion of... \n(1) Dance & Drama \n(2) Fine Arts \n(3) Literature \n(4) Music\n ");
	printf("\nEnter Answer : ");
	scanf("%d",&n);
	for(i=1;i<=2;i++)
	{
		switch(i)
		{
			case 1:
			if(n==2)
			{
				printf("Your Answer is Absolute Right.... You Won $.300000cr.\n");
			}
			else
			{
				printf("Try Again..");
				printf("\nEnter Answer : ");
				scanf("%d",&n);
			if(n==2)
				{
					printf("Your Answer is Absolute Right.... You Won $.50000cr.\n");
				}
			else
				{
					printf("Game Over!!\n");
					printf("Answer is : (2) Fine Arts\n");
					printf("\n(Fourth Person)\n");
				}
			}
		}
	}
		
							//Question = 4//
														
    printf("\n(4)Next Question : \n");
	printf("Who among the following signed the 1974 agreement on Tin Bigha transfer to Bangladesh ? \n(1) General H.M  Ershad and Indira Gandhi \n(2) General H.M.Ershad and Morarji Desa \n(3) Sheikh Mujibur-Rehman and Indira Gandhi \n(4) Sheikh MujibiIr - Rehman and Jawaharlal Nehru\n ");
	printf("\nEnter Answer : ");
	scanf("%d",&n);
	for(i=1;i<=2;i++)
	{
		switch(i)
		{
			case 1:
			if(n==3)
			{
				printf("Your Answer is Absolute Right.... You Won $.400000cr.\n");
			}
			else
			{
				printf("Try Again..");
				printf("\nEnter Answer : ");
				scanf("%d",&n);
			if(n==3)
				{
					printf("Your Answer is Absolute Right.... You Won $.50000cr.\n");
				}
			else
				{
					printf("Game Over!!\n");
					printf("Answer is : (3) Sheikh Mujibur-Rehman and Indira Gandhi\n");
					printf("\n(Fifth Person)\n");
				}	
			}
		}
	}
		
								//Question = 5//
								
	printf("\n(5)Next Question : \n");
	printf("Which day is observed as the World Standards Day ? \n(1) June 26 \n(2) Dec 2 \n(3) Nov 15 \n(4) Oct 14\n ");
	printf("\nEnter Answer : ");
	scanf("%d",&n);
	for(i=1;i<=2;i++)
	{
		switch(i)
		{
			case 1:
			if(n==4)
				{
					printf("Your Answer is Absolute Right.... You Won $.500000cr.\n");
				}
			else
			{
				printf("Try Again..");
				printf("\nEnter Answer : ");
				scanf("%d",&n);
			if(n==4)
				{
					printf("Your Answer is Absolute Right.... You Won $.50000cr.\n");
				}
			else
				{
					printf("Game Over!!\n");
					printf("Answer is : (4) Oct 14\n");
				}
			}
		}
	}
}