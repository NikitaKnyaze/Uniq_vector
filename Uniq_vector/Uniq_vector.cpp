#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
   std::vector<int> my_v{ 1,1,2,5,6,1,2,4 };
   std::sort(my_v.begin(), my_v.end());

   for (const auto& s : my_v)
      std::cout << s << " ";

   std::cout << std::endl;
   
   auto it = std::unique(my_v.begin(), my_v.end());

   my_v.erase(it, my_v.end());

   for (const auto& s : my_v)
      std::cout << s << " ";

   return 0;
}

