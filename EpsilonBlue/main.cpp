/*
 Welcome to Project Code 101!

 This is just a full analysis of re
*/
#include <iostream>
#include <iomanip>
#include <string>

//===================================================================================
//
class student {
public:
	student(const std::string& lname = "", const std::string& fname = "",
		double gpa = 0.0, int cwid = 0)
		: fname_(fname), lname_(lname), gpa_(gpa), cwid_(cwid) {}

	std::string fname() const { return fname_; }
	std::string lname() const { return lname_; }
	double gpa() const { return gpa_; }
	int cwid() const { return cwid_; }

	void gpa(double gpa) { gpa_ = gpa; }

	friend std::ostream& operator<<(std::ostream& os, const student& st) {
		os << std::setprecision(2) << std::fixed;

		return os << "student[" << std::setw(18) << (st.lname_ + ", " + st.fname_)
			<< ", gpa=" << std::setw(4) << st.gpa_ << ",cwid=" << st.cwid_ << "]";
	}


private:
	std::string fname_;
	std::string lname_;
	double gpa_;
	int cwid_;
};
//===================================================================================
struct studentNode {
	studentNode(const std::string& )// continue here.
};

//===================================================================================
int main() {
	std::cout << "\n=====================================================\n";
	std::cout << "STUDENT LIST LAB ====================================\n";
	std::cout << "... singly-linked list\n\n";
}
