#include<iostream>
#include<iomanip> //used to set precision for floating point numbers.

void showbalance(double balance)
{
    std::cout<<"your balance is $"<<std::setprecision(2)<<std::fixed<<balance<<"\n";
}

double deposit() //double return type as we will return something.
{
    double amount;
    std::cout<<"enter amout to be deposited \n";
    std::cin>>amount;

    if(amount>0)
    {
    return amount;
    }
    else
    {
        std::cout<<"that is not a valid number \n";
        return 0;
    }


}
double withdraw(double balance)
{
    double amount;
    std::cout<<"enter amout to be withdrawn "<<"\n";
    std::cin>>amount;


    if(amount>balance)
    {
        std::cout<<"INSUFFICIENT FUNDS"<<"\n";
    }
    else if(amount<0)
    {
        std::cout<<"THAT IS NOT VALID \n";
    }
    else{
        return amount;
    }
return 0;
}

int main()
{
    double balance=123;
    int choice;
while(choice!=4)
{
    std::cout<<"************************";
    std::cout<<"enter your choice \n";
    std::cout<<"************************ \n";
    std::cout<<"1.SHOW BALANCE \n";
     std::cout<<"2.DEPOSIT \n";
      std::cout<<"3.WITHDRAW \n";
       std::cout<<"4.EXIT \n";

       std::cin>>choice;

       switch(choice)
       {
        case 1:
        showbalance(balance);
        break;

        case 2:balance+=deposit(); //deposit function returns the value of ("return") amount.
         showbalance(balance);
        break;

        case 3:balance-=withdraw(balance);
        showbalance(balance);
        break;

        case 4:std::cout<<"THANKS FOR VISITING \n";
        break;

        default:std::cout<<"enter valid choice \n";
       }
}



}