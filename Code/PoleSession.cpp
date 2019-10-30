#include "PoleSession.hpp"

/*static*/ std::shared_ptr<IPayment> PoleSession::payment = std::make_shared<Payment>();

PoleSession::PoleSession(/* args */):IPoleSession(), Session()
{
}

PoleSession::~PoleSession()
{
}

IPoleSession::IPoleSession(/* args */)
{
}

IPoleSession::~IPoleSession()
{
}
