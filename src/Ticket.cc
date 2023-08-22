#include <thread>

#include "Ticket.h"

int Ticket::GetTicketCount()
{
    return this->ticket_count;
}

void Ticket::SellTicket(int id)
{
    while (this->ticket_count > 0)
    {
        std::cout << "window:" << id << " sell the number:" << ticket_count << "ticket" << std::endl;
        this->ticket_count--;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    std::cout << "the ticket has been sold!" << std::endl;
}