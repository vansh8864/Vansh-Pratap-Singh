#include <stdio.h>
// Structure to store ticket details
struct Ticket
{
    int ticketNo;
    char name[50];
    int seats;
};
int main()
{
    // Array of structure to store multiple bookings
    struct Ticket t[100];
    int n, i, choice, searchTicket, found = 0;
    // Input total number of bookings
    printf("Enter number of bookings: ");
    scanf("%d", &n);
    // Input booking details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Booking %d\n", i + 1);
        printf("Ticket Number: ");
        scanf("%d", &t[i].ticketNo);
        printf("Passenger Name: ");
        scanf(" %[^\n]", t[i].name);
        printf("Number of Seats: ");
        scanf("%d", &t[i].seats);
    }
    // Menu starts
    do
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Display All Bookings\n");
        printf("2. Search Booking\n");
        printf("3. Book More Seats\n");
        printf("4. Cancel Seats\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            // Display all bookings
            case 1:
                printf("\nBooking Details:\n");
                for(i = 0; i < n; i++)
                {
                    printf("\nTicket Number : %d", t[i].ticketNo);
                    printf("\nPassenger Name: %s", t[i].name);
                    printf("\nSeats Booked  : %d\n", t[i].seats);
                }
                break;
            // Search booking by ticket number
            case 2:
                found = 0;
                printf("Enter Ticket Number: ");
                scanf("%d", &searchTicket);
                for(i = 0; i < n; i++)
                {
                    if(t[i].ticketNo == searchTicket)
                    {
                        printf("\nBooking Found!\n");
                        printf("Passenger Name: %s\n", t[i].name);
                        printf("Seats Booked : %d\n", t[i].seats);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Booking not found!\n");
                break;
            // Book additional seats
            case 3:
                found = 0;
                int addSeats;
                printf("Enter Ticket Number: ");
                scanf("%d", &searchTicket);
                for(i = 0; i < n; i++)
                {
                    if(t[i].ticketNo == searchTicket)
                    {
                        printf("Enter number of seats to add: ");
                        scanf("%d", &addSeats);
                        t[i].seats += addSeats;
                        printf("Seats booked successfully!\n");
                        printf("Total Seats: %d\n", t[i].seats);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Booking not found!\n");
                break;
            // Cancel booked seats
            case 4:
                found = 0;
                int cancelSeats;
                printf("Enter Ticket Number: ");
                scanf("%d", &searchTicket);
                for(i = 0; i < n; i++)
                {
                    if(t[i].ticketNo == searchTicket)
                    {
                        printf("Enter number of seats to cancel: ");
                        scanf("%d", &cancelSeats);
                        if(cancelSeats <= t[i].seats)
                        {
                            t[i].seats -= cancelSeats;
                            printf("Seats cancelled successfully!\n");
                            printf("Remaining Seats: %d\n", t[i].seats);
                        }
                        else
                        {
                            printf("Invalid number of seats!\n");
                        }
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Booking not found!\n");
                break;
            // Exit program
            case 5:
                printf("Exiting Program...\n");
                break;
            // Invalid choice
            default:
                printf("Invalid Choice! Please try again.\n");
        }
    } while(choice != 5);
    return 0;
}