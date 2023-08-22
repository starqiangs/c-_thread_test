#include <list>
#include <iostream>

class Ticket
{
public:
    int GetTicketCount();
    void SellTicket(int id);
private:
    int ticket_count = 100;
};