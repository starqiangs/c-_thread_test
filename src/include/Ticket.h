#include <list>
#include <iostream>
#include <thread>
#include <mutex>

class Ticket
{
public:
    int GetTicketCount();
    void SellTicket(int id);
private:
    int ticket_count = 100;
    std::mutex mtx; //互斥锁
};