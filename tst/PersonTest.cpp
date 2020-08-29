//
// Created by Maikol Guzman on 8/24/20.
//

#include <BankTransferSender.h>
#include <Person.h>
#include <CashSender.h>
#include <CheckSender.h>
#include "gtest/gtest.h"

TEST(PersonTestSuite, PaymentMethod){

    ISendPayment* bankTransfer = new BankTransferSender();
    ISendPayment* cashSender = new CashSender();
    ISendPayment* checkSender = new CheckSender();
    Person person;
    EXPECT_EQ(person.PaymentMethod(bankTransfer), "Sending the money by transference");
    EXPECT_EQ(person.PaymentMethod(cashSender), "Give the money in the hands");
    EXPECT_EQ(person.PaymentMethod(checkSender), "Sending the check with the money");


}
