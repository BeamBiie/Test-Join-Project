#include <stdio.h>
int main()
{
    int Suki_IT_019 = 239;
    double Tax = 0.07;
    int Customers;
    printf("How_many_customers_are_there?:"); // มีลูกค้ากี่ราย? 
    scanf("%d", &Customers); //ลูกค้า 
    if (Customers <= 4){ //ลูกค้าน้อยกว่าหรือเท่ากับ4คน 
        int Total_price = (Customers - 1) * Suki_IT_019; //ราคารวมทั้งหมด ลบกับ 1 เพราะลูกค้าคนหนึ่งฟรี
        double Tax_expenses = Total_price + (Total_price * Tax); //ราคารวมทั้งหมดรวมภาษี
        printf("Total_Price: %d\n", Total_price);
        printf("Total_Price with Tax: %.2f\n", Tax_expenses);}
    else {
        int Total_price = Customers * Suki_IT_019; //ราคารวมทั้งหมด = จำนวนลูกค้า * ราคาอาหารต่อคน
        double Tax_expenses = Total_price + (Total_price * Tax); //ราคารวมทั้งหมดรวมภาษี = ราคารวมทั้งหมด + (ราคารวมทั้งหมด * ภาษี)
        printf("Total_Price: %d\n", Total_price);
        printf("Total_Price with Tax: %.2f\n", Tax_expenses);}
    printf("\nDo you want to continue? (Y/N): ");
    char choice;
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'n') { //ตรวจสอบว่าผู้ใช้ป้อน'y'หรือ'n'ถ้า y ให้ทำงานต่อแต่ถ้าเป็น n ให้จบโปรแกรม
        return main();}
    else {
        printf("***Thank_You***\n");} //ทั้งหมดใช้ translate
        
}