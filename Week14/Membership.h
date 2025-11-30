#include <string>
using namespace std;
class Membership
{
private:
	string member_first_name;
	string member_last_name;
	int member_age;
	string membership_type;
	double membership_cost;
public:
	Membership() // default constructor 
	{
		member_first_name = "Not Entered";
		member_last_name = "Not Entered";
		member_age = 18;
		membership_type = "Bronze";
		membership_cost = 0.0;
	}
	void Membership::member_first_name_set(string mfname)
	{
		member_first_name = mfname;
	}
	string Membership::member_first_name_get()
	{
		return member_first_name;
	}
	void Membership::member_last_name_set(string mlname)
	{
		member_last_name = mlname;
	}
	string Membership::member_last_name_get()
	{
		return member_last_name;
	}
	void Membership::member_age_set(int mage)
	{
		member_age = mage;
	}
	int Membership::member_age_get()
	{
		return member_age;
	}
	void Membership::membership_type_set(string mtype)
	{
		membership_type = mtype;
	}
	string Membership::membership_type_get()
	{
		return membership_type;
	}
	void Membership::membership_cost_set(double mcost)
	{
		membership_cost = mcost;
	}
	double Membership::membership_cost_get()
	{
		if (membership_type == "Gold")
			membership_cost = 1200.00;
		else if (membership_type == "Silver")
			membership_cost = 1000.00;
		else // else is "Bronze" membership
			membership_cost = 500.00;
		if (member_age > 50)
			membership_cost -= membership_cost * 0.10; // 10% discount for members over 50
		return membership_cost;
	}
	
};
