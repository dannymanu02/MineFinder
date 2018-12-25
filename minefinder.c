#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int x[100][100],n,c,moves,points;

main()
     { int i ,j,k;
       k=1;
       
       instructions();
       
    l1: printf("enter the number of rows you want to play with");
       scanf("%d",&n);
       
       if(n>12||n<1)
        { printf("invalid option, choose only between 1 to 12\n");
		  goto l1;
        }
       
       for(i=0;i<n;i++)
           { printf("\t\t\t");
		     for(j=0;j<n;j++)
                { printf(" |%d ",k);
                  k++;
				}
			  printf("\n"); 	
			  printf("\t\t\t ---------------------------------------- \t\t\t\n");
		   }
			  
        arrange();
		  
	 }
	 
instructions()
             { printf("The following game is Minesweeper, this game is not the orthodox game you get in computers\n");
               printf("the objective of the game is to open the boxes given without distubing the bombs (or zeroes in this case), points ranging from two to five will be present in the boxes and once you encounter a bomb(or zero) your game ends.\n");
               printf("Simply enter the number of the box to unlock the points in the box.\n");
               printf("the maximum number of boxes is 144 or 12 rows and the minimum is 1\n");
               printf("GOOD LUCK!!\n");
               printf("ENJOY!!!\n");
			 }
	 
arrange()
       { int k=1,i,j;
	     switch(n)
               { case 1 : for(i=0;i<n;i++)
                             { for(j=0;j<n;j++)
                                   { if(k%3==0||k%7==0)
								       { x[i][j]=0;
									   }
									  
									  else if(k%11==0)
									         { x[i][j]=5;
											 }
											 
									  else   
									      { x[i][j]=2;
										  }
									
									  k++;	  
								   }
							 }
						   break;
						   
			   case 2 : for(i=0;i<n;i++)
                             { for(j=0;j<n;j++)
                                   { if(k%4==0||k%7==0)
								       { x[i][j]=0;
									   }
									  
									  else if(k%13==0)
									         { x[i][j]=5;
											 }
											 
									  else   
									      { x[i][j]=2;
										  }
									
									  k++;	  
								   }
							 }
						   break;
						   
				case 3 : for(i=0;i<n;i++)
                             { for(j=0;j<n;j++)
                                   { if(k%4==0||k%5==0)
								       { x[i][j]=0;
									   }
									  
									  else if(k%10==0)
									         { x[i][j]=5;
											 }
											 
									  else   
									      { x[i][j]=2;
										  }
									
									  k++;	  
								   }
							 }
						   break;
					
				case 4 : for(i=0;i<n;i++)
                             { for(j=0;j<n;j++)
                                   { if(k%3==0&&k%6==0)
								       { x[i][j]=0;
									   }
									  
									  else if(k%13==0)
									         { x[i][j]=5;
											 }
											 
									  else   
									      { x[i][j]=2;
										  }
									
									  k++;	  
								   }
							 }
						   break;
						   
			   case 5 : for(i=0;i<n;i++)
                             { for(j=0;j<n;j++)
                                   { if(k%2==0&&k%4==0)
								       { x[i][j]=0;
									   }
									  
									  else if(k%13==0)
									         { x[i][j]=5;
											 }
											 
									  else   
									      { x[i][j]=2;
										  }
									
									  k++;	  
								   }
							 }
						   break;
						   
			    case 6 : for(i=0;i<n;i++)
                             { for(j=0;j<n;j++)
                                   { if(k%4==0||k%12==0)
								       { x[i][j]=0;
									   }
									  
									  else if(k%15==0)
									         { x[i][j]=5;
											 }
											 
									  else   
									      { x[i][j]=2;
										  }
									
									  k++;	  
								   }
							 }
						   break;
						   
				case 7 : for(i=0;i<n;i++)
                             { for(j=0;j<n;j++)
                                   { if(k%3==0||k%7==0)
								       { x[i][j]=0;
									   }
									  
									  else if(k%11==0)
									         { x[i][j]=5;
											 }
											 
									  else   
									      { x[i][j]=2;
										  }
									
									  k++;	  
								   }
							 }
						   break;
						   
				case 8 : for(i=0;i<n;i++)
                             { for(j=0;j<n;j++)
                                   { if(k%4==0||k%7==0)
								       { x[i][j]=0;
									   }
									  
									  else if(k%13==0)
									         { x[i][j]=5;
											 }
											 
									  else   
									      { x[i][j]=2;
										  }
									
									  k++;	  
								   }
							 }
						   break;
						   
				case 9 : for(i=0;i<n;i++)
                             { for(j=0;j<n;j++)
                                   { if(k%4==0||k%5==0)
								       { x[i][j]=0;
									   }
									  
									  else if(k%10==0)
									         { x[i][j]=5;
											 }
											 
									  else   
									      { x[i][j]=2;
										  }
									
									  k++;	  
								   }
							 }
						   break;
					
				case 10 : for(i=0;i<n;i++)
                             { for(j=0;j<n;j++)
                                   { if(k%3==0&&k%6==0)
								       { x[i][j]=0;
									   }
									  
									  else if(k%13==0)
									         { x[i][j]=5;
											 }
											 
									  else   
									      { x[i][j]=2;
										  }
									
									  k++;	  
								   }
							 }
						   break;
						   
			   case 11 : for(i=0;i<n;i++)
                             { for(j=0;j<n;j++)
                                   { if(k%2==0&&k%4==0)
								       { x[i][j]=0;
									   }
									  
									  else if(k%13==0)
									         { x[i][j]=5;
											 }
											 
									  else   
									      { x[i][j]=2;
										  }
									
									  k++;	  
								   }
							 }
						   break;
						   
			    case 12 : for(i=0;i<n;i++)
                             { for(j=0;j<n;j++)
                                   { if(k%4==0||k%12==0)
								       { x[i][j]=0;
									   }
									  
									  else if(k%15==0)
									         { x[i][j]=5;
											 }
											 
									  else   
									      { x[i][j]=2;
										  }
									
									  k++;	  
								   }
							 }
						   break;

                            
						   
			    default : printf("invalid choice, choose only between 1 to 6");
			              break;
			   }	   
		choice();
	   }
	   
choice()
       { int k=1,i,ch,j;
	     printf("enter the box of your choice");
	     scanf("%d",&ch);
         moves=moves+1;
         
         if(moves==n*n)
           { printf("Wonderful!! You've just cleared the game with the most points, hence we shall crown you the king!!\n");
             display();
		   }
         
         for(i=0;i<n;i++)
            { for(j=0;j<n;j++)
                 { if(k==ch)
                     { if(x[i][j]==0)
                         { printf("You've just encountered the WALL!!, this is the end\n");
                           display();
						 }
					  else
					      { points=points+x[i][j];
                            printf("current points=%d\n",points);
                            k++;
                            
                            choice();
                          }
					 }
					 
				   else
				       { k++;
					   }
				 }
			}
	   }
	   
display()
        { int i,k=0,j;
          
          for(i=0;i<n;i++)
           { printf("\t\t\t");
		     for(j=0;j<n;j++)
                { printf(" |%d ",x[i][j]);
                  k++;
				}
			  printf("\n"); 	
			  printf("\t\t\t ---------------------------------------- \t\t\t\n");
			  
		   }
		   
	     printf("Your total points are %d\n",points);
		   
		   exit(0);
	   }
		  
		  
