#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>

using namespace std;

int inputValue, tel, mfPrice , pbPrice , sdPrice , hdPrice ,qty, eventPrice;
string YesNo, Name, email,date;

class Customer
{
protected:

public:
    Customer ();
    void storeCustomerData();
};

Customer::Customer()
{

}

void Customer::storeCustomerData()
{
    cout<<"Enter Name : ";
    cin>>Name;
    cout<<"\nEnter E-Mail : ";
    cin>>email;
    cout<<"\nEnter Telephone Number : +94 ";
    cin>>tel;

    fstream customerInfo;
    customerInfo.open("customerInfo.txt");
    if (customerInfo.is_open()){
        customerInfo<<Name<<"\n"<<email<<"\n"<<tel;;
    }else{
        cout<<"Error While opeaning File... "<<endl;
    }
    customerInfo.close();
}

class Food
{
protected:

public:
    void DisplaySubMenu();
    void meetAndFish();
    void plantBase();
    void sideDish();
    void desert();

};

void Food::DisplaySubMenu()
{
    cout<<" 1 -> Meat & Fish"<<endl;
    cout<<" 2 -> Plant Base"<<endl;
    cout<<" 3 -> Side Dishes"<<endl;
    cout<<" 4 -> Homemade Desserts"<<endl;
    cout<<" 0 -> Back"<<endl;

    cout<<"\n\n\nSelect Option \n -> ";
    cin>>inputValue;
}

void Food::meetAndFish()
{
    cout<<" -> Meat & Fish | BBQ, Chiken, pork, Grilled/Steamed/Fried/Roast Fish"<<endl;
    cout<<" _____________________________________________________________________"<<endl<<endl;

    cout<<"| NO|  NAME                      | PRICE         |"<<endl;
    cout<<"| 1 | Chicken Soup               |20 USD         |"<<endl;
    cout<<"| 2 | Flame Grilled Steak        |36 USD         |"<<endl;
    cout<<"| 3 | Jerk Wings                 |87 USD         |"<<endl;
    cout<<"| 4 | Fried Chicken Wings        |58 USD         |"<<endl;
    cout<<"| 5 | Grilled Lobster            |60 USD         |"<<endl;
    cout<<"| 6 | Roast Fish                 |38 USD         |"<<endl;
    cout<<"| 7 | Steam Fish                 |41 USD         |"<<endl;
    cout<<"| 8 | Escovitch Fish             |10 USD         |"<<endl;

    cout<<"Select Option \n -> ";
    cin>>inputValue;
    cout<<"Quantity \n -> ";
    cin>>qty;
    switch (inputValue)
    {
    case 1:
        mfPrice = qty * 20;
        break;
    case 2:
        mfPrice = qty * 36;
        break;
    case 3:
        mfPrice = qty * 87;
        break;
    case 4:
        mfPrice = qty * 58;
        break;
    case 5:
        mfPrice = qty * 60;
        break;
    case 6:
        mfPrice = qty * 38;
        break;
    case 7:
        mfPrice = qty * 41;
        break;
    case 8:
        mfPrice = qty * 10;
        break;
    default:
        cout<<"INVALID INPUT... "<<endl;
        break;
    }
    cout<<"Price : "<<mfPrice<<endl;


}
void Food::plantBase()
{
    cout<<" -> Plant Base | Vegan, stew, BBQ Veg, Rice, Salads,"<<endl;
    cout<<" ____________________________________________________"<<endl<<endl;

    cout<<"| NO|  NAME                      | PRICE         |"<<endl;
    cout<<"| 1 | Vegan Stew                 |15 USD         |"<<endl;
    cout<<"| 2 | Chickpea Curry             |22 USD         |"<<endl;


    cout<<"Select Option \n -> ";
    cin>>inputValue;
    cout<<"Quantity \n -> ";
    cin>>qty;

    switch (inputValue)
    {
    case 1:
        pbPrice = qty * 15;
        break;
    case 2:
        pbPrice = qty * 22;
        break;
    default:
        cout<<"Invalid ... ";
        break;
    }
    cout<<"Price : "<<pbPrice<<endl;

}

void Food::sideDish()
{
    cout<<" -> Side Dishes | Plaintain, Rice and Peas, White rice, Chow mein, Roti"<<endl;
    cout<<"  _______________________________________________________________________"<<endl<<endl;

     cout<<"| NO|  NAME                     | PRICE         |"<<endl;
    cout<<"| 1 | Chips                      |25 USD         |"<<endl;
    cout<<"| 2 | Fried Dumpling             |56 USD         |"<<endl;
    cout<<"| 3 | Rice and Peas              |77 USD         |"<<endl;
    cout<<"| 4 | Mac and Cheese             |58 USD         |"<<endl;


    cout<<"Select Option \n -> ";
    cin>>inputValue;
    cout<<"Quantity \n -> ";
    cin>>qty;
    switch (inputValue)
    {
    case 1:
        sdPrice = qty * 25;
        break;
    case 2:
        sdPrice = qty * 56;
        break;
    case 3:
        sdPrice = qty * 77;
        break;
    case 4:
        sdPrice = qty * 58;
        break;
    default:
        cout<<"Invalid ... ";
        break;
    }
    cout<<"Price : "<<sdPrice<<endl;


}

void Food::desert()
{
    cout<<" -> Homemade Desserts | Tropical bakewell tart"<<endl;
    cout<<" _______________________________________________"<<endl<<endl;

    cout<<"| NO|  NAME                      | PRICE         |"<<endl;
    cout<<"| 1 | Apple Crumble              |08 USD         |"<<endl;
    cout<<"| 2 | Avocado ice-cream          |36 USD         |"<<endl;
    cout<<"| 3 | Cakes to Order             |27 USD         |"<<endl;
    cout<<"| 4 | Soursop ice-cream          |58 USD         |"<<endl;
    cout<<"| 5 | Mango Sorbet               |60 USD         |"<<endl;


    cout<<"Select Option \n -> ";
    cin>>inputValue;
    cout<<"Quantity \n -> ";
    cin>>qty;
    switch (inputValue)
    {
    case 1:
        hdPrice = qty * 8;
        break;
    case 2:
        hdPrice = qty * 36;
        break;
    case 3:
        hdPrice = qty * 27;
        break;
    case 4:
        hdPrice = qty * 58;
        break;
    case 5:
        hdPrice = qty * 60;
        break;
    default:
        cout<<"Invalid ... ";
        break;
    }
    cout<<"Price : "<<hdPrice<<endl;

}

class Events
{
protected:

public:
    void DisplaySubMenu();
    void weddings();
    void dinarParties();
    void corporate();
    void festival();

};

void Events::DisplaySubMenu()
{
    cout<<" 1 -> Weddings"<<endl;
    cout<<" 2 -> Dinner Parties"<<endl;
    cout<<" 3 -> Corporate"<<endl;
    cout<<" 4 -> Festivals"<<endl;
    cout<<" 0 -> Back"<<endl;

    cout<<"\n\n\nSelect Option \n -> ";
    cin>>inputValue;
}


void Events::weddings()
{
    cout<<" -> Weddings"<<endl;
    cout<<" ______________"<<endl;
    cout<<" [5600 USD]"<<endl;
    cout<<"\n\n Delroy’s Grillhouse caters all types and sizes of weddings throughout London and surrounding areas. Whether you have a clear picture of what you want your day will look like, or whether you need guidance. We will guide you through the entire process from setup to cleanup."<<endl;
    cout<<" BESPOKE FOOD MENU   | We will work with you to design a food menu to meet all your needs"<<endl;
    cout<<" BESPOKE DRINK MENUS | We will work with you to design a drinks menu to compliment your choose food menu"<<endl;
    cout<<" BALANCED DIET       | We will ensure your guests or clients will enjoy a well balance meal"<<endl<<endl;
    cout<<" Make a Reservation? [Y/N] \n -> ";
    cin>>YesNo;
    if (YesNo == "Y" | YesNo == "y"){
        eventPrice = 5600;
        cout<<"Enter Date [YYYY-MM-DD] \n -> ";
        cin>>date;
    }

}
void Events::dinarParties()
{
    cout<<" -> Dinner Parties"<<endl;
    cout<<" ___________________"<<endl;
    cout<<" [200 USD]"<<endl;
    cout<<"\n\n We are able to look after all your food and kitchen needs whilst you entertain your guests. This can include food prep, cook, serve and cleaning up. Saving you a lot of the stress whilst managing you event"<<endl<<endl;
    cout<<" WE COOK"<<endl;
    cout<<" WE SERVE"<<endl;
    cout<<" WE CLEAN"<<endl<<endl;
    cout<<" Make a Reservation? [Y/N] \n -> ";
    cin>>YesNo;
    if (YesNo == "Y" | YesNo == "y"){
        eventPrice = 200;
        cout<<"Enter Date [YYYY-MM-DD] \n -> ";
        cin>>date;
    }
}
void Events::corporate()
{
    cout<<" -> Corporate"<<endl;
    cout<<" ______________"<<endl;
    cout<<" [400 USD]"<<endl;
    cout<<"\n\n Our team will make sure your employees, clients, team members and executive boards are well fed We can cater for an 8-person drop-off catering to 600-person upfront meetings, we will meticulously plan every crumb, from delivery to disposal."<<endl<<endl;
    cout<<" CANAPES"<<endl;
    cout<<" PLATTERS"<<endl;
    cout<<" DINING"<<endl<<endl;
    cout<<" Make a Reservation? [Y/N] \n -> ";
    cin>>YesNo;
    if (YesNo == "Y" | YesNo == "y"){
        eventPrice = 400;
        cout<<"Enter Date [YYYY-MM-DD] \n -> ";
        cin>>date;
    }
}
void Events::festival()
{
    cout<<" -> Festivals"<<endl;
    cout<<" _______________"<<endl;
    cout<<" [450 USD]"<<endl;
    cout<<"\n\n We have a vibrant team to cover festivals of all sizes"<<endl<<endl;
    cout<<" BBQ MEAT"<<endl;
    cout<<" BBQ VEG"<<endl;
    cout<<" DRINKS"<<endl<<endl;
    cout<<" Make a Reservation? [Y/N] \n -> ";
    cin>>YesNo;
    if (YesNo == "Y" | YesNo == "y"){
        eventPrice = 450;
        cout<<"Enter Date [YYYY-MM-DD] \n -> ";
        cin>>date;
    }
}



class About
{
public:
    void DisplaySubMenu();
    void showDetail();

};

void About::DisplaySubMenu()
{
    cout<<"                          Know More"<<endl;
    cout<<"                         +++++++++++"<<endl<<endl<<endl;
    cout<<"                          About Us"<<endl;
    cout<<" “You can’t entertain a man who has no food”  – Bob Marley"<<endl;
    cout<<" ____________________________________________________________"<<endl;
}


void About::showDetail()
{
    cout<<" -> Background"<<endl;
    cout<<" Founded in 2019 by chef and managing director Delroy Mitchell, Delroy’s Grillhouse is an innovative and dynamic caterer backed by a dedicated team of hospitality and related industry professionals."<<endl;
    cout<<"\n -> History"<<endl;
    cout<<" Chef Delroy has runs several kitchens in Westfield Stratford mall, The Yard Theatre, Hackney Wick and The Constituition pub, Camden Town."<<endl;
    cout<<"\n -> Sustainability"<<endl;
    cout<<" Our industry is one of excess and waste, and we feel a great responsibility to impact change and do our part to forge a greener future. Since the environment directly impacts the quality of the ingredients we have available to us, it’s quite evident that the more we take care of the earth, the more it will take care of us.We have a policy to compost all vegetable waste and then use the compost created to grow some of our seasonal ingredients."<<endl;
    cout<<"\n -> Our Team"<<endl;
    cout<<" HEAD CHEF        |   DELROY"<<endl;
    cout<<" CHEF DE PARTIE   |   ORVILLE"<<endl;
    cout<<" CHEF DE PARTIE   |   KEVIANNE"<<endl;
    cout<<"\n\n -> Values"<<endl;
    cout<<" Service          |   Our team are able to attend to client needs in at any event attend. Ensuring satisfaction from start to finish. "<<endl;
    cout<<" Freedom          |   We let our team have the power to excercise choice and make decisions without too many constraints"<<endl;
    cout<<" Responsibility   |   Our team can be relied on at all levels throughout the business."<<endl;
}




class Contact
{
public:
    void DisplaySubMenu();
    void showDetails();
    void contactForm();

};

void Contact::DisplaySubMenu()
{
    cout<<"                         Get in touch"<<endl;
    cout<<"                        ++++++++++++++"<<endl<<endl<<endl;
    cout<<"                          Contact Us"<<endl;
    cout<<"   Lorem ipsum dolor sit amet, consectetur adipiscing elit."<<endl;
    cout<<" ____________________________________________________________"<<endl;

    cout<<"\n\n\n\n";
}


void Contact::showDetails()
{
    cout<<"=============================="<<endl;
    cout<<" Are You Looking For a Place?"<<endl;
    cout<<"    Come, Dine With Us!"<<endl;
    cout<<"=============================="<<endl<<endl<<endl;
    cout<<"  Delroys GrillHouse, UK"<<endl;
    cout<<"______________________________"<<endl<<endl;
    cout<<" WEB  | http://www.delroysgrillhouse.com/"<<endl;
    cout<<"______________________________"<<endl<<endl;
    cout<<" Call Now | 07960 488 622"<<endl<<endl<<endl<<endl;
}
void Contact::contactForm()
{

    cout<<"  Do you have a query ? [Y/N] "<<endl;
    cout<<"______________________________"<<endl;
    cin>>YesNo;
    if (YesNo == "Y" || YesNo == "y"){
        fstream getMessageForum;
        getMessageForum.open("messages.txt",ios::app);
        if (getMessageForum.is_open()){
            string FName, LName, mail, Message;
            cout<<"\nFirst Name : ";
            cin>>FName;
            getMessageForum<<"\nFirst Name : "<<FName;
            cout<<"\nLast Name : ";
            cin>>LName;
            getMessageForum<<"\nLast Name : "<<LName;
            cout<<"\nE-Mail Address : ";
            cin>>mail;
            getMessageForum<<"\nE-Mail Address : "<<mail;
            cout<<"\nEnter Message \n ->";
            cin>>mail;
            getMessageForum<<"\nMessage : "<<mail;
            cout<<" Message Sended... "<<endl;

        }else{
            cout<<"__________________________________________"<<endl;
            cout<<" Sorry! we have trouble with Open File..."<<endl;
            cout<<"__________________________________________"<<endl;

        }
    system("pause");
    getMessageForum.close();
    }else{
        system("pause");
    }

}

class Invoice : public Food, public Events, public Customer
{
public:
    void ShowInvoice();
};

void Invoice::ShowInvoice()
{
    cout<<"Customer Name : "<<Name<<endl;
    cout<<"Customer E-Mail : "<<email<<endl;
    cout<<"Customer Contact No : +94 "<<tel<<endl;
    cout<<"Food Price : "<<mfPrice + pbPrice + sdPrice + hdPrice<<" USD"<<endl;
    cout<<"Event Price : "<<eventPrice<<" USD"<<" | Date : "<<date<<endl<<endl;

    cout<<"++++++++++++++++++++++++++++"<<endl;
    cout<<"Meet & Fish Price : "<<mfPrice <<" USD"<<endl;
    cout<<"Plant Base Price  : "<< pbPrice<<" USD"<<endl;
    cout<<"Side Dish Price   : "<< sdPrice <<" USD"<<endl;
    cout<<"Desert Price      : "<< hdPrice<<" USD"<<endl<<endl;
    cout<<"========================================"<<endl;
    cout<<" Total : "<<mfPrice + pbPrice + sdPrice + hdPrice + eventPrice<<" USD"<<endl;
    cout<<"========================================"<<endl;
}

//...........................................................................................................

void menu()
{
    cout<<" 1 -> Food Menu"<<endl;
    cout<<" 2 -> Events"<<endl;
    cout<<" 3 -> About Us"<<endl;
    cout<<" 4 -> Contact Us"<<endl;
    cout<<" 5 -> Invoice"<<endl;
    cout<<" 0 -> Exit"<<endl;

}

void getInput()
{
    cout<<"\n\n\nSelect Option \n -> ";
    cin>>inputValue;
}

//.............................................................................................

int main()
{
    Customer x;
    Invoice I; Events b; Food a;
    x.storeCustomerData();
    system("CLS");
    menu();
    getInput();

    system("CLS");
    while (inputValue != 0){
        switch (inputValue)
        {

            case 1:

                a.DisplaySubMenu();
                while (inputValue != 0){
                    system("CLS");
                    switch (inputValue)
                    {
                    case 1:
                        a.meetAndFish();
                        break;
                    case 2:
                        a.plantBase();
                        break;
                    case 3:
                        a.sideDish();
                        break;
                    case 4:
                        a.desert();
                        break;
                    default:
                        cout<<"Invalid Input... "<<endl<<endl<<endl;
                        cout<<" -> Process Heare"<<endl;
                        break;
                    }
                    system("pause");
                    system("CLS");
                    a.DisplaySubMenu();
                    system("CLS");
                }

                break;
            case  2:
                system("CLS");
                b.DisplaySubMenu();
                while (inputValue != 0){
                    system("CLS");
                    switch (inputValue)
                    {
                    case 1:
                        b.weddings();
                        break;
                    case 2:
                        b.dinarParties();
                        break;
                    case 3:
                        b.corporate();
                        break;
                    case 4:
                        b.festival();
                        break;
                    default:
                        cout<<"Invalid Input... "<<endl<<endl<<endl;
                        cout<<" -> Process Heare"<<endl;
                        break;
                    }
                    system("pause");
                    system("CLS");
                    b.DisplaySubMenu();
                    system("CLS");
                }
                break;
            case  3:

                About c;
                c.DisplaySubMenu();
                c.showDetail();
                system("pause");
                system("CLS");
                break;
            case  4:

                Contact d;
                d.DisplaySubMenu();
                d.showDetails();
                d.contactForm();
                system("pause");
                system("CLS");
                break;
            case  5:

                I.ShowInvoice();
                system("pause");
                break;
            default:
                cout<<"Invalid Input... "<<endl<<endl<<endl;
                break;
        }
        system("CLS");
        menu();
        getInput();
    }
    return 0;
}
