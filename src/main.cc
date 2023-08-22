#include <iostream>
#include <thread>
#include <list>

#include "Ticket.h"

void SellTicket(Ticket &ticket, int index)
{
    ticket.SellTicket(index);
}

int main()
{
    std::list<std::thread> ticket_list;
    Ticket ticket(100);

    for (int i = 1; i <= 3; i++)
    {
        ticket_list.emplace_back(std::thread(SellTicket, std::ref(ticket), i));
    }

    for (auto &thread : ticket_list)
    {
        thread.join();
    }

    std::cout << "the ticket has been sold!" << std::endl;

    return 0;
}