
int main()
{
    int X=1;
    char Calc_oprn;
 
    calc_operations();
 
    while(X)
    {
        printf("\n");
        printf("%s : ", KEY);
 
        Calc_oprn=getche();
 
        switch(Calc_oprn)
        {
            case '+': add();
                      break;
 
            case '-': sub();
                      break;
 
            case '*': mul();
                      break;
 
            case '/': div();
                      break;
 
            case '?': mod();
                      break;
 
            case '!': fact();
                      break;
 
            case '^': pow();
                      break;
 
            case 'H':
            case 'h': calc_operations();
                      break;
 
            case 'Q':
            case 'q': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      calculator_operations();
                      break;
 
            default : system("cls");
 
    printf("\n***You have entered unavailable option");
    printf("***********\n");
    printf("\n*****Please Enter any one of below available ");
    printf("options****\n");
             calc_operations();
        }
    }
}
