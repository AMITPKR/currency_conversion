/* currency convertor Indian Rupees to 1. American Dollar, 2. Pound(UK), 3. Yen(Japan), 
4. Yuan(china), 5. Russian Ruble, 6. Euro(19 european union country) * and vice-versa*/
#include<iostream>
using namespace std;
int main(){
    double rp,intl; int num,choice;
    cout<<"\nTHE PROGRAM IS BASED ON PRESENT VALUES OF CURRENCIES (21-09-2011). IT MAY DIFFER IN FUTURE.\n\n";
    cout<<"Select 1 :Rupees to international currency conversion,  Select 2 :International Currency to Rupees conversion\n ";
    cin>>choice;

    calculation:
    if(choice==1){
    cout<<"Currency Number (1 Dollar 2 pound 3 Yen 4 Yuan 5 ruble 6 Euro) in which you want to conversion of Rupee\n";
    cin>>num;
    cout<<"Enter the value of Indian Rupee:"; cin>>rp;
    currency:
    switch(num){ 
        case 1: cout<<"American dollar : "; cout<< (rp*0.014); break;
        case 2: cout<<"Pound : "; cout<< (rp*0.0099); break;
        case 3: cout<<"Yen : "; cout<< (rp*1.49); break;
        case 4: cout<<"Yuan : "; cout<< (rp*0.088); break;
        case 5: cout<<"Russian Ruble : "; cout<< (rp*1); break;
        case 6: cout<<"Euro : "; cout<< (rp*0.012); break;
        default: cout<<"Please enter correct currency no. from 1 to 6 :";cin>>num; 
        goto currency;

    }
            }
    
    else if(choice==2){  cout<<"Currency Number (1 Dollar 2 pound 3 Yen 4 Yuan 5 ruble 6 Euro) which will convert into Rupee : ";
        cin>>num;
        cout<<"Enter the choosen international Currency value: "; cin>>intl;

        current:
        switch(num){ case 1: cout<<intl<<" Dollar Equal To "<<(intl*73.63)<<" Rupees";break;
        case 2: cout<<intl<<" pound Equal To "<<(intl*100.62)<<" Rupees"; break;
        case 3: cout<<intl<<" Yen Equal To "<<(intl*0.67)<<" Rupees"; break;
        case 4: cout<<intl<<" Yuan Equal To "<<(intl*11.38)<<" Rupees"; break;
        case 5: cout<<intl<<" Ruble Equal To "<<(intl*1)<<" Rupees"; break;
        case 6: cout<<intl<<" Euro Equal To "<<(intl*86.36)<<" Rupees"; break;
        default: cout<<"Please enter correct currency no. from 1 to 6: "; cin>>num;
        goto current;
        }
    }
    else
        cout<<"Please Select 1 or 2 :  "; cin>>choice;
        goto calculation;

return 0;
}