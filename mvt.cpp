#include <iostream>
#include <vector>
  
int main() {
  
  std::vector<double> delivery_order;
  
  delivery_order.push_back(8.99);
  delivery_order.push_back(3.75);
  delivery_order.push_back(0.99);
  delivery_order.push_back(5.99);
  
  // Calculate the total using a for loop:
  
  double total = 0.0;

  for (int i = 0; i < delivery_order.size(); i++) {

        total = total + delivery_order[i];

    }

    std::cout << "\n" << "The total value of all the delivery orders are: " << total;

}

/* The way I did it down here is better 

#include <iostream>
#include <vector>
  
int main() {
  
  std::vector<double> delivery_order;
  
  delivery_order.push_back(8.99);
  delivery_order.push_back(3.75);
  delivery_order.push_back(0.99);
  delivery_order.push_back(5.99);
  
  // Calculate the total using a for loop:
  
  double total = 0.0;

  for (double x = 0.0; x < delivery_order.size(); x++) {

        total += delivery_order[x];

    }

    std::cout << "\n" << "The total value of all the delivery orders are: " << total;

}

*/
