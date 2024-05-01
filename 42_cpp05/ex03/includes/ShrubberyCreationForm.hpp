#ifndef EX03_SHRUBBERY_CREATION_FORM_HPP_
#define EX03_SHRUBBERY_CREATION_FORM_HPP_

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
 private:
  std::string target_;
  void executeAction(Bureaucrat const &executor) const;
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

 public:
  ShrubberyCreationForm();
  ShrubberyCreationForm(const std::string target);
  ShrubberyCreationForm(const ShrubberyCreationForm &other);
  ~ShrubberyCreationForm();
  void execute(Bureaucrat const &executor) const;
};

#endif
