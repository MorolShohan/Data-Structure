#include<iostream>
using namespace std;

struct toll
{

    string carNumber;
    string date;
    string ticketNumber;
    int tollRate;
};

class queue
{
    int maxSize=3, frontpart, backpart,tollCount;
    toll *Queue;
public:
    queue()
    {
        Queue = new toll[maxSize];
        frontpart = backpart = -1;
        tollCount = 0;

    }
    ~queue()
    {
        delete[] Queue;
    }

    bool empty()
    {
        if((frontpart == -1) and (backpart == -1))
        {
            return true;
        }
        else return false;
    }
    bool full()
    {
        if(backpart == (maxSize-1))
        {
            return true;
        }
        return false;
    }
    toll front()
    {
        if(empty())
        {
            cout << "Queue is empty!!!!"<<endl;
        }
        return Queue[frontpart];
    }
    void enqueue(toll data)
    {
        if(full())
        {
            maxSize *= 2;
            toll *tempQ = new toll[maxSize];
            for(int i = 0; i < tollCount; i++)
                tempQ[i] = Queue[i];
            delete[] Queue;
            Queue = tempQ;
        }
        if(empty())
        {
            frontpart = backpart = 0;
            Queue[backpart] = data;
            tollCount++;
        }
        else
        {
            backpart = (backpart+1) % maxSize;
            Queue[backpart] = data;
            tollCount++;
        }
    }
    void dequeue()
    {
        if(empty())
        {
            cout << "!!empty!! dequeue is not possible!!!!"<<endl;
        }
        else if(backpart == frontpart)
        {
            frontpart = backpart = -1;
            tollCount--;
        }
        else
        {
            frontpart = (frontpart+1)%maxSize;
            tollCount--;
        }
    }
    int size()
    {
        return tollCount;
    }
    int maxsize()
    {
        return maxSize;
    }

    void tICKET(string date)
    {
        cout << "*** Date : " << date << endl;
        cout << "\n" <<endl;
        cout << "\n"<<endl;
        int cnt = 1;
        if(!empty())
        {
            for(int i = frontpart; i <= backpart; i++)
            {
                if(Queue[i].date == date)
                {
                    if(cnt)
                    {
                        if(Queue[i].tollRate == 700)
                        {
                            cout << "## Total Vehicle on heavyDuty : " << tollCount << endl;
                            cnt = 0;
                        }
                        else if(Queue[i].tollRate == 400)
                        {
                            cout << "## Total Vehicle on mediumDuty : " << tollCount << endl;
                            cnt = 0;
                        }
                        else if(Queue[i].tollRate == 200)
                        {
                            cout << "## Total Vehicle on lightDuty : " << tollCount << endl;
                            cnt = 0;
                        }
                    }

                    cout << " ****************** " << endl;
                    cout << "Car Number : " << Queue[i].carNumber << endl;
                    cout << "Ticket Number : " << Queue[i].ticketNumber << endl;
                    cout << "\n"<<endl;
                }
            }
        }
    }

    void showTicketNumber(string carNumber)
    {
        if(!empty())
        {
            for(int i = frontpart; i <= backpart; i++)
            {
                if(Queue[i].carNumber == carNumber)
                {

                    cout<<"         ********   **    *     *        *****     **      **   ********  *   *"<<std::endl;

     cout<<"            **     *  *   *     *        *    *   *  *    *  *     **     *   *"<<endl;

     cout<<"            **    *    *  *     *        *****   *    *  *    *    **     *****"<<endl;

     cout<<"            **     *  *   *     *        *    *   *  *    *  *     **     *   *"<<endl;

     cout<<"            **      **    ***** *****    *****     **      **      **     *   *"<<endl;

                    cout << "Car Number : " << Queue[i].carNumber << endl;
                    cout << "Ticket Number : " << Queue[i].ticketNumber << endl;
                    cout << "Date : " << Queue[i].date << endl;
                    cout<<"\n"<<endl;


                }
            }
        }
    }
    int totalEarningSingle(string date)
    {
        int totalEarning = 0;
        int tolltollype = 0;
        if(!empty())
        {
            for(int i = frontpart; i <= tollCount; i++)
            {
                if(Queue[i].date == date)
                {
                    totalEarning += Queue[i].tollRate;
                    tolltollype = Queue[i].tollRate;
                }
            }
        }
        return totalEarning;
    }
};

void totalEarningSingle(queue &VehicleType, string date)
{
    int totalEarning = 0;
    if(!VehicleType.empty())
    {
        int tolltollype = VehicleType.front().tollRate;
        totalEarning = VehicleType.totalEarningSingle(date);
        if(tolltollype == 700)
        {
            cout << "***** Total Earning of Heavy-Duty *****"<<endl;
            cout << "Date : " << date << endl;
            cout << "==> " << totalEarning << " taka" << endl;
        }
        else if(tolltollype == 400)
        {
            cout << "****** Total Earning of Medium-Duty **** "<<endl;
            cout << "Date : " << date << endl;
            cout << "==> " << totalEarning << " taka" << endl;
        }
        else if(tolltollype == 200)
        {

            cout<<"****** Total earning of Light-Duty *******"<<endl;
            cout << "Date : " << date << endl;
            cout << "==> " << totalEarning << " taka" << endl;
        }
    }
    else
    {
        cout << "==> " << totalEarning << " taka" << endl;
    }
}

void totalEarning(queue &heavyDuty, queue &mediumDuty, queue &lightDuty,string date)
{
    int totalEarning = 0;
    if(!heavyDuty.empty())
        totalEarning += heavyDuty.totalEarningSingle(date);
    if(!mediumDuty.empty())
        totalEarning += mediumDuty.totalEarningSingle(date);
    if(!lightDuty.empty())
        totalEarning += lightDuty.totalEarningSingle(date);
    cout << "\n" <<endl;
    cout <<"\n"<<endl;
    cout << "*** Total Earning of = "<<date <<" ***"<<endl;
    cout << "==> " << totalEarning << endl;
}



void vehicleQueue(queue &VehicleType, string date)  //pass by reference//
{
    VehicleType.tICKET(date);
}
int main()
{
    toll padma;
    queue heavyDuty,mediumDuty,lightDuty;
    padma.date = "30-Jun-21";
    padma.carNumber = "Dhaka-05640";
    padma.ticketNumber = "01";
    padma.tollRate = 700;
    heavyDuty.enqueue(padma);

    padma.date = "30-Jun-21";
    padma.carNumber = "MYMENSINGH-054461";
    padma.ticketNumber = "02";
    padma.tollRate = 700;
    heavyDuty.enqueue(padma);

    padma.date = "30-Jun-21";
    padma.carNumber = "Barishal-1025";
    padma.ticketNumber = "03";
    padma.tollRate = 700;
    heavyDuty.enqueue(padma);

    padma.date = "30-Jun-21";
    padma.carNumber = "KHULNA-05640";
    padma.ticketNumber = "01";
    padma.tollRate = 400;
    mediumDuty.enqueue(padma);

    padma.date = "30-Jun-21";
    padma.carNumber = "RANGPUR-0544461";
    padma.ticketNumber = "02";
    padma.tollRate = 400;
    mediumDuty.enqueue(padma);

    padma.date = "30-Jun-21";
    padma.carNumber = "DINAJPUR-14022";
    padma.ticketNumber = "03";
    padma.tollRate = 400;
    mediumDuty.enqueue(padma);

    padma.date = "30-Jun-21";
    padma.carNumber = "KURIGRAM-05440";
    padma.ticketNumber = "01";
    padma.tollRate = 200;
    lightDuty.enqueue(padma);

    padma.date = "30-Jun-21";
    padma.carNumber = "AGRABAD-0201";
    padma.ticketNumber = "02";
    padma.tollRate = 200;
    lightDuty.enqueue(padma);

    padma.date = "30-Jun-21";
    padma.carNumber = "RAJSHAHI-2002";
    padma.ticketNumber = "03";
    padma.tollRate = 200;
    lightDuty.enqueue(padma);




    heavyDuty.showTicketNumber("Dhaka-05640");
    lightDuty.showTicketNumber("RAJSHAHI-2002");
    mediumDuty.showTicketNumber("RANGPUR-0544461");


    totalEarning(heavyDuty,mediumDuty,lightDuty,"30-Jun-21");
    totalEarningSingle(heavyDuty,"30-Jun-21");
    totalEarningSingle(mediumDuty,"30-Jun-21");
    totalEarningSingle(lightDuty,"30-Jun-21");

    vehicleQueue(heavyDuty,"30-Jun-21");
    vehicleQueue(mediumDuty,"30-Jun-21");
    vehicleQueue(lightDuty,"30-Jun-21");


}
