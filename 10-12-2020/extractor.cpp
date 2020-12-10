#include <iostream> //Output
#include <vector> //Vector
#include <string> //String
#include <cstdlib> //System - Time
#include <ctime> //For really random
using namespace std;
int main(){

    system("clear");
    system("pyfiglet -f slant NoNameoN");
    cout << "\nAuthor: https://github.com/NoNameoN-A\n" << endl;

    vector<string> addresses;
    addresses.push_back("0x5329Ce3A6f25b2c9be21C986B16F4CF6dec1BJO3");
    addresses.push_back("0x4c29f2F4cCee91911df4935429Ae8557a55B341E");
    addresses.push_back("0x443fcDB490Bd9d6bDF7B644a8F602c6912C2b3D9");
    addresses.push_back("0x05f2b67E8525631096e5B2cb16b469ACdbF706B3");
    addresses.push_back("0xc97D1989dD8485fC7334Dc709dE83C13A714078b");
    addresses.push_back("0xf6e15426823cafcb744c4201a67f0740b9e250af");
    addresses.push_back("0x1A19253cE4BF6dC0B524b0A723c2Ad747a221428");
    addresses.push_back("0x3C8F2b19cfCdc7d32E7f54D947c0b76BF95379C2");
    addresses.push_back("0x88Ab2db15068a2038d454B7B87c7055f4A2c0ccb");
    addresses.push_back("0x46B7B92606d8596AFc4b9dc4d8F2bed377B0A6ab");
    addresses.push_back("0x33bd7b4d0A8AC7A323724938CCF6945E04b4775b");
    addresses.push_back("0x61A52246535C7e268702359CCa3b568Dec8C68BA");
    addresses.push_back("0x61296ef4aFd8429E3c600c2eb896c7777E31871B");
    addresses.push_back("0x1F073D175B81032df2a5e0CDDf13b49B59D560De");
    addresses.push_back("0x8c90E7b937EE9a43d2307A54A78c3f344Edd57e7");
    addresses.push_back("0x13ba1670e24fc99d842a8dea5fa5283ae8d33b8f");
    addresses.push_back("0x1bc796bF2440A5017C0Ba162dda4d27D66FE91B2");
    addresses.push_back("0xAAaB1150834e601B7e73cAd9b0Ac6F484ab8166a");
    addresses.push_back("0xb3f3965c72592284576d00117946a8c6454aa347");

    /* initialize random seed: */
    srand (time(NULL));
    /* generate secret number between 0 and the size of the vector */
    int randomPosition = rand() % addresses.size();

    cout << "The winner address is: " << addresses[randomPosition] << endl;
}