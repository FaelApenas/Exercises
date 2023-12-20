#include <iostream>

using namespace std; 

int select_number(char c)
{
    int selected_n=0; 
    switch (c)
        {
        case 'I': 
            selected_n=1;
            break;

        case 'V': 
            selected_n=5;
            break;
        case 'X': 
            selected_n=10;
            break;
        case 'L': 
            selected_n=50;
            break;
        case 'C': 
            selected_n=100;
            break;
        case 'D': 
            selected_n=500;
            break;
        case 'M': 
            selected_n=1000;
            break;
        
        default:
            break;
        }
    return selected_n; 

}
int romanToInt(string s)
{
    int result=0;
    
    for(int i=0; i<s.size(); i++)
    {
        int temp=0; 
        temp =select_number(s[i]); 
       
        if(temp<select_number(s[i+1]))
        {
        result =result-temp;

        }
        

        else
        result +=temp; 
    }

    return result; 
}

int main()
{
string s= "MCMXCIV"; 
int result =romanToInt(s);
cout <<result <<endl;


}