 #include<stdio.h> 
 int main()
 { float celsius, fahrenheit; 
 printf("Enter temperature in Celsius: "); 
 scanf("%f", &celsius); 
 fahrenheit = (celsius * 9 / 5) + 32; 
 printf("%.2f°C is equal to %.2f°F\n", celsius, fahrenheit); 
 return 0;
 }
 
 //Enter temperature in Celsius: 50
//50.00°C is equal to 122.00°F

//Enter temperature in Celsius: -40
//-40.00°C is equal to -40.00°F

