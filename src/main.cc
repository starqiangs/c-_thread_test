#include <iostream>
#include <thread>
#include <list>

#include "Ticket.h"

/*
backlog:
    模拟三个窗口同时卖票
    总数100张
*/

void SellTicket(Ticket &ticket, int index)
{
    ticket.SellTicket(index);
}

int main()
{
    std::list<std::thread> ticket_list;
    Ticket ticket;

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