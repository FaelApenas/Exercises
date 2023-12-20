#include <iostream> 

int addDigits(int num) {
    // - Ex: 38 
    int sum1=0;
    int sum2=0; 
    
    
    while(num>=10){
        sum1= num%10; 
        sum2=num/10;
        num= sum1+sum2; 
        addDigits(num); 
    }
    return num;
} 


int main()
{
    int result = addDigits(10); 
    std::cout<<result <<std::endl;
    return 0;
}