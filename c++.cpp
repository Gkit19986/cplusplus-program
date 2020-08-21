# include <iostream>
#include <iomanip>
using namespace std;

int main(){
float mDpst;
float AnuInt;
float months;
float years;
float totlAmt;
float initAmt =0.00;// not sure why i had to assign a value to it, when i left it blank, it came with unassigned variable.
float yearTotInt;

//Display form to user to get info from user
cout << "###############################\n";

cout << "########## Data Input #########\n";


cout << "Initial Investment Amount: \n";
cout << "Monthly Deposit: \n";
cout << "Annual Interest: \n";
cout << "Number of years: \n";
//Wait for input from user

cout << "###############################\n";
cout << "########## Data Input #########\n";
cout << "Initial Investment Amount: $";
cin >> initAmt;
cout << "Monthly Deposit: $";
cin >> mDpst;
cout << "Annual Interest: %";
cin >> AnuInt;
cout << "Number of years: ";
cin >> years;
months = years * 12;

totlAmt = initAmt;
//Display year data without monthly deposits
cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
cout << "###############################\n";
cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
cout << "###############################\n";

for (int i = 0; i < years; i++) {
//Calculate yearly interest
//Calculate year end total
 totlAmt = totlAmt + initAmt;
//Print results to table showcasing only two decimal points
cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totlAmt << "\t\t\t$" << initAmt << "\n";
}
//Set total amount to initial investment to be updated
totlAmt = initAmt;
//Display year data with monthly deposits
cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
cout << "##################################\t#################################\n";
cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
cout << "#################################\t##################################\n";

for (int i = 0; i < years; i++) {
//Set yearly interest to zero at the start of the year
yearTotInt = 0;
for (int j = 0; j <= 11; j++) {
//Calculate monthly interest
initAmt = (totlAmt + mDpst) * ((AnuInt / 100) / 12);
yearTotInt = yearTotInt + initAmt;
//Calculate month end total
totlAmt = totlAmt + mDpst + initAmt;
}
//Print results to table showcasing only two decimal points
cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totlAmt << "\t\t\t$" << yearTotInt << "\n";

}
return 0;
}
