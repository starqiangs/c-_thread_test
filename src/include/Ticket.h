#include <list>
#include <iostream>
#include <thread>
#include <mutex>

class Ticket
{
public:
    Ticket(int count);
    int GetTicketCount();
    void SellTicket(int id);
private:
    int ticket_count = 0;
    std::mutex mtx; //互斥锁
};