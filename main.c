#include <stdio.h>
#include <stdlib.h>

int main()
{
    EX36();

    return 0;
}
void EX38()
{

}
void EX36()///Didn't Get it
{
    int i,j,k;
    for (i=1;i<=5;i++)
    {
        for(j=1;j<=3;j++)
        {
            for(k=1;k<=4;k++)
                printf("*");
            printf("\n");
        }
        printf("\n");
    }
}
void EX35()///Not implemented
{

}
void EX34()///Not Implemented yet
{

}
void EX33()///I dont know roman numeral
{

}
void EX31()
{
    int i,j,k,userInput,asterisk,space,upSide=1;
    printf("enter your diamond  diagonal size : ");
    scanf("%d",&userInput);

    if (userInput%2==1)
    {

        space=(userInput-1)/2;
        asterisk=1;

        while(1)
        {
            if (upSide==1)
            {
                for(i=space;i>0;i--)
                    printf(" ");
                for(i=0;i<asterisk;i++)
                    printf("*");

                printf("\n");
                if (asterisk==userInput)
                {
                    upSide=0;
                    asterisk-=2;
                    space++;
                    continue;
                }
                asterisk+=2;
                space--;
            }
            else
            {
                for(i=0;i<space;i++)
                    printf(" ");
                for(i=asterisk;i>0;i--)
                    printf("*");
                printf("\n");
                if(asterisk==1)
                    break;
                asterisk-=2;
                space++;
            }
        }
    }
        else
    {
        printf("you must enter an odd number to execute !!!");
        EX31();
    }
}
void EX29()///Not Sure about this
{
    printf("!(x<5)&&!(y>=7) ==>> !((x<5)||(y>=7))\n!(a==b)||!(g!=5) ==>> !((a==b)&&(g!=)");
    printf("\n!((x<=8)&&(y>4)) ==>> !(x<=8)||!(y>4)\n!((i>4)||(j<=6)) ==>> !(i>4)&&!(j<=6)\n");
}
void EX28()
{
    int userInput,i;
    float payment=0;
    const float basePay=5000,everyHourPayment=20,everyPiecePayment=5;
    for (i=0;i>=0;i++)
    {
        payment=0;
        printf("enter the type of employee\n(1:Manager\t2:Hourly Workers\t3:Commision Workers\t4:pieceWorker\t(any other to end)");
        scanf("%d",&userInput);
        switch(userInput)
        {
            case 1:
                payment=basePay;
                break;
            case 2:
                printf("\nEnter the # of Hours he/she worked : ");
                scanf("%d",&userInput);
                if (userInput<=40)
                    payment=userInput*everyHourPayment;
                else
                    payment=(40*everyHourPayment)+((1.5*everyHourPayment)*(userInput-40));
                break;
            case 3:
                printf("\nenter total gross sales you made : ");
                scanf("%d",&userInput);
                payment=250+(.057*userInput);
                break;
            case 4:
                printf("\nenter the # of pieces you made : ");
                scanf("%d",&userInput);
                payment=userInput*everyPiecePayment;
            default:
                printf("\ntotal employees payment you calculated with this app is : %d",i);
                break;
        }
        if(payment!=0)
            printf("\nthe wage to be payed is %f ",payment);
        else
        {

            printf("\nyou exited the app !!");
            return;
        }

    }
}
void EX27()///not implemented but very important
{

}
void EX26()
{
    float i=3,pi=4,flage=0,counter=0;
    while(1)
    {
        if (flage==0)
        {
            pi-=(4/i);
            flage=1;
        }
        else
        {
            pi+=(4/i);
            flage=0;
        }
        i+=2;
        counter++;
        printf("\t%f",pi);
        if(pi)
            printf("\n\nafter %f try we catched the right answer :%f\n\n",counter,pi);
    }

}
void EX25()///not implemented
{

}
void EX24()
{
    int m=0;
    printf("a) 1\tb) 0\tc) 1\td) 0\te) 1\t\n");
    printf("f) 0\tg) 0\th) 1\ti) 0\tj) 1");
}
void EX19()
{
    int userInput,quantity,productNumber;
    float total=0;
    printf("1\t2.98\n2\t4.50\n3\t9.98\n4\t4.49\n5\t6.87");
    while(1)
    {
        printf("\nenter the number of product you wanna purchase?(enter any other # to end it ");
        scanf("%d",&productNumber);
        if(productNumber>0&&productNumber<6)
        {
            printf("\nenter the quantity you wanna purchase from this product? ");
            scanf("%d",&quantity);
            switch(productNumber)
            {
                case 1:
                    total+=quantity*2.98;
                    break;
                case 2:
                    total+=quantity*4.50;
                    break;
                case 3:
                    total+=quantity*9.98;
                    break;
                case 4:
                    total+=quantity*4.49;
                    break;
                case 5:
                    total+=quantity*6.87;
                    break;
            }

        }
        else
        {
            printf("the total cost to pay is %f ",total);
            return;
        }
    }
}
void EX18()
{
    const int enteringNumbers=5;
    int userInput,counter=0,counter2=0;
    while(counter++<enteringNumbers)
    {
        printf("enter the number: ");
        scanf("%d",&userInput);
        while(counter2++<userInput)
            printf("*");
            counter2=0;
        printf("\n");
    }
}
void EX16()
{
    int i,userInput,j,k;
    scanf("%d",&userInput);
    for(i=0;i<=userInput;i++)
    {
        for(j=0;j<i;j++)
            printf("*");
        printf("\n");
    }
    /************************************************************/
    for (i=userInput;i>0;i--)
    {
        for(j=i;j>0;j--)
            printf("*");
        printf("\n");
    }
    /*************************************************************/
    for (i=userInput;i>0;i--)
        {
            for(j=0;j<i-1;j++)
                printf(" ");
            for(j;j<userInput;j++)
                printf("*");
            printf("\n");
        }
    /**************************************************************/
                printf("\n");





        for (i=userInput;i>0;i--)
        {
            /*            for(j=0;j<i;j++)         */
            for(j=i-userInput+6;j<userInput;j++)
                printf(" ");
            for(j=0;j<i;j++)
                printf("*");
            printf("\n");
        }


}
void EX14()
{
    int i=1,userInput,product=1;
    scanf("%d",&userInput);
    for(i=1;i<=userInput;i++)
    {
        product*=i;
        printf("%d",i);
        if (i<userInput)
            printf("*");
        else
            printf("=");
    }
    printf("%d",product);
}
void EX13()
{
    int i,product=1;

    for(i=0;i<=15;i+2)
    {
        product*=i;
    }
    printf("the product of it is : %d",product);
}
void EX12()
{
    int total,number=2;
    while(number<=30)
    {
        total+=number;
        number+=2;
    }
    printf("the sum is %d",total);
}
void EX11()
{
    int userInput,counter=0,maximum=0;
    printf("enter how many #s would you enter :");
    scanf("%d",&userInput);
    while(counter++<userInput)
    {
        printf("enter number");
        scanf("%d",&userInput);
        if(userInput>maximum)
            maximum=userInput;
    }
    printf("the most biggest number was :%d",maximum);
}
void EX10()
{
    int userInput,counter=0,total,avg;
    while(1==1)
    {
        printf("enter num: ");
        scanf("%d",&userInput);
        total+=userInput;
        counter++;
        if (userInput==9999)
        {
            avg=total/userInput;
            break;
        }
    }
    printf("the average is %d ",avg);
}
void EX09()
{
    int countOfNumbers,userInput,total=0,counter=0;
    printf("enter how many numbers do you wanna enter : ");
    scanf("%d",&countOfNumbers);
    while(counter++<countOfNumbers)
    {
        scanf("%d",&userInput);
        total+=userInput;
    }
    printf("the sum of %d entered numbers is %d ",userInput,total);
}
void EX08()
{
    printf("it prints out a rectangle with the side lengths of first and second entered numbers. ");
}
void EX07()
{
    const int counter=10;
    int i;
    for (i=0;i<counter;i++)
        printf("%d,",i);
    printf("\b\b\b");

}
void EX05()
{
    printf("1:in for structure we need ; instead of ,\n2:in switch case we need Break  command every case ends\n");
    printf("3:the getchar() function returns an int amount witch is not a char value although we can cast it from ascii to char\n");
    printf("4:\n");//I Dont Know
    printf("5:the command x+=2 is incorrect and the right one is x-=2\n");
    printf("6:if command is redundant  and the while condition must be (counter<=100)\n");
    printf("7:after if () we dont have ;");

}
