#ifndef DATATYPES_HPP
#define DATATYPES_HPP
#include <vector>
#include <memory>
#include "Card.hpp"
#include "Position.hpp"
typedef unsigned long long ull_t;




namespace DataTypes
{
	enum InvoiceStatus {PENDING, PROCESSING, PAID, REJECTED};

    enum Subscription {BETAALD, GRATIS};

    enum CarStatus {DOOR_CLOSED_AT_REDCARS, DOORS_OPEN_AT_REDCARS, PARKED, ACTIVE, PARKED_AT_REDCARS};

    class Reservation;
    class OpenPayment;
    typedef std::shared_ptr<Reservation> Reservation_ptr;
    typedef std::shared_ptr<OpenPayment> OpenPayment_ptr;
    class OpenPayment 
    {
    private:
        ull_t id;
        float amount;
        InvoiceStatus status;
    public:
        OpenPayment();
        ~OpenPayment();
        const ull_t getId() const;
        const float getAmount() const;
        const InvoiceStatus getInvoiceStatus() const;
        void setInvoiceStatus(const InvoiceStatus status);
    };

    class User 
    {
    private:
        ull_t id;
        short reputation = 0;
        bool accountActive = true;
        std::string name, address, bankAccountNumber, email;
        std::vector<Reservation_ptr> reservations; 
        std::vector<OpenPayment_ptr> openPayments; 
        Card card;
        Subscription subscription;
    public:
        User();
        ~User();
        ull_t getId();
        const std::string& getName() const;
        void setName(std::string& name);
        const std::string& getAddress() const;
        void setAddress(std::string& address);
        const short getReputation() const;
        void setReputation(short rep);
        const std::string& getBankAccountNumber() const;
        void setBankAccountNumber(std::string& bank);
        const std::string& getEmail() const;
        void setEmail(std::string& email);
        const Reservation_ptr getCurrentReservation() const;
		const bool isAccountActive() const;
		void setAccountActive(bool accountActive = true);
		const Card& getCard() const;
		const std::vector<OpenPayment_ptr>& getOpenPayments() const;
		void addOpenPayments(OpenPayment& openPayment);
		const std::vector<Reservation_ptr>& getReservations() const;
		void addReservation(OpenPayment& openPayment);
		Subscription getSubscription() const;
		void setSubscription(Subscription subscription);
	};
    
    class Reservation
    {
    private:
    	ull_t id, startTime, endTime, startMileage, endMileage;
    	Position pickupPosition;
    	bool checkedIn, completed;
    	Subscription subscription;
    public:
		bool isCheckedIn() const;
		void setCheckedIn(bool checkedIn);
		bool isCompleted() const;
		void setCompleted(bool completed);
		ull_t getEndMileage() const;
		void setEndMileage(ull_t endMileage);
		ull_t getEndTime() const;
		ull_t getId() const;
		const Position& getPickupPosition() const;
		void setPickupPosition(const Position &pickupPosition);
		bool isCarOnPickupPosition();
		ull_t getStartMileage() const;
		void setStartMileage(ull_t startMileage);
		ull_t getStartTime() const;
		Subscription getSubscription() const;
	};

    class CarDetails
    {
    private:
    	ull_t id;
    	short noDoors, noSeats;
    	std::string brand, licensePlate, extras;
    	Position position;
    public:
		const std::string& getBrand() const;
		const std::string& getExtras() const;
		void setExtras(const std::string &extras);
		ull_t getId() const;
		const std::string& getLicensePlate() const;
		short getNoDoors() const;
		void setNoDoors(short noDoors);
		short getNoSeats() const;
		void setNoSeats(short noSeats);
		const Position& getPosition() const;
		void setPosition(const Position &position);
    };

    
} // namespace DataTypes



#endif // !DATATYPES_HPP
