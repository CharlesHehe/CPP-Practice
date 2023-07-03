#include <iostream>
#include <vector>
using namespace std;
class PromotionCode
{
public:
    std::vector<bool> checkCodes(const std::vector<std::string> &customerCodes, const std::vector<std::string> &validCodes);
};

class PromotionCodeImplemation : PromotionCode
{
    std::vector<bool> checkCodes(const std::vector<std::string> &customerCodes, const std::vector<std::string> &validCodes)
    {

    }
};