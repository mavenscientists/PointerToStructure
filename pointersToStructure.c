  /**  
    * This program is free software: you can redistribute it and/or modify
    * it under the terms of the GNU General Public License as published by
    * the Free Software Foundation, either version 3 of the License, or
    * (at your option) any later version.
    * 
    * This program is distributed in the hope that it will be useful,
    * but WITHOUT ANY WARRANTY; without even the implied warranty of
    * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    * GNU General Public License for more details.
    * 
    * Copyright 2013 Maven Scientists http://mavenscientists.com
    */

 /**
   * @author	Maven Scientists (http://mavenscientists.com) 
   * @email	info@mavenscientists.com
   */

#include <stdio.h>
#include <string.h>

struct student
{
	int id;
	char name[40];
};

int main()
{
	struct student s1 = {12, "Maven Scientists"};
	struct student* s2;

	s2 = &s1;

	printf("\t\tStudent Record");
	printf("\nId   : %d", (*s2).id); // use any of the one method to access the structure 
	printf("\nName : %s", s2->name);
	
	return 0;
}
