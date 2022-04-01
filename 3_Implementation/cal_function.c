//functions that we have used in our calculator program
void add();
void sub();
void mul();
void div();
void mod();
void pow();
int factl();
void calc_operations();

void calc_operations()
{
    //system("cls");  use system function to clear 
    //screen instead of clrscr();
    printf("\n             Welcome to C calculator \n\n");
 
    printf("******* Press 'Q' or 'q' to quit ");
    printf("the program ********\n");
    printf("***** Press 'H' or 'h' to display ");
    printf("below options *****\n\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");
 
    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter ? symbol for Modulus\n");
    printf("Enter ^ symbol for Power \n");
    printf("Enter ! symbol for Factorial \n\n");
}
 
void add()
{
    int n, total=0, k=0, num;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    { 
        scanf("%d",&num);
        total=total+num;
        k=k+1;
    }
    printf("Sum of %d numbers = %d \n",n,total);
}
 
void sub()
{ 
    int x, y, c = 0; 
    printf("\nPlease enter first number  : "); 
    scanf("%d", &x); 
    printf("Please enter second number : "); 
    scanf("%d", &y); 
    c = x - y; 
    printf("\n%d - %d = %d\n", x, y, c); 
}
 
void mult()
{
    int x, y, mul=0; 
    printf("\nPlease enter first numb   : "); 
    scanf("%d", &x); 
    printf("Please enter second number: "); 
    scanf("%d", &y);
    mul=x*y;
    printf("\nMultiplication of entered numbers = %d\n",mul);
}
 
void div()
{
    int x, y, d=0; 
    printf("\nPlease enter first number  : "); 
    scanf("%d", &x); 
    printf("Please enter second number : "); 
    scanf("%d", &y);
    d=x/y;
    printf("\nDivision of entered numbers=%d\n",d);
}
 
void mod()
{
    int a, b, m=0; 
    printf("\nPlease enter first number   : "); 
    scanf("%d", &a); 
    printf("Please enter second number  : "); 
    scanf("%d", &b);
    m=a%b;
    printf("\nModulus of entered numbers = %d\n",m);
}
 
void pow()
{
    double a,number, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf",&a);
 
    printf("power : ");
    scanf("%lf",&number);
 
    p=pow(a,number);
 
    printf("\n%lf to the power %lf = %lf \n",a,number,p);
}
 
int fact()
{
    int i,fact=1,number;
 
    printf("\nEnter a number to find factorial : ");
    scanf("%d",&number);
 
    if (num<0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        return 1;
    }               
 
    for(i=1;i<=number;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",number,fact);
    return 0;
}

