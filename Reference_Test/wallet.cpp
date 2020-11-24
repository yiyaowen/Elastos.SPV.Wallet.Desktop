#include <MasterWalletManager.h>
#include <IMasterWallet.h>
#include <iostream>
#include <string>
using namespace Elastos::ElaWallet;
using namespace std;

#define walletRoot "/Users/fort.w/Desktop/Elastos.SPV.Wallet.Desktop/wallet_data"

int main()
{
    string network = "MainNet";
    nlohmann::json netConfig = nlohmann::json();
    MasterWalletManager * manager = new MasterWalletManager(walletRoot, network, netConfig);

    cout << manager->GetVersion() << endl;
}
