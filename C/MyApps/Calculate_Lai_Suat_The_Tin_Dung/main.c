#include <stdio.h>
#include <stdlib.h>

void calculateLaiSuat(float tpBank, float hsbc);

int main()
{
    float soTienTheTPBankXaiThangNay;
    float soTienTheHSBCXaiThangNay;
    printf("Nhap vao so tien the tin dung TPBank con du lai o thang nay: ");
    scanf("%f", &soTienTheTPBankXaiThangNay);
    printf("\n");
    printf("Nhap vao so tien the tin dung HSBC con du lai o thang nay: ");
    scanf("%f", &soTienTheHSBCXaiThangNay);
    printf("\n");
    calculateLaiSuat(soTienTheTPBankXaiThangNay, soTienTheHSBCXaiThangNay);
    return 0;
}

void calculateLaiSuat(float tpBank, float hsbc)
{
    float laiSuatTPBankThanhToanDuNo = 0.08;
    float laiSuatHSBCThanhToanDuNo = 0.05;
    float laiSuatHangThangCuaTheDuocTinhTPBank = 0.336;
    float laiSuatHangThangCuaTheDuocTinhHSBC = 0.333;
    float soTienPhaiThanhToanThangNayCuaTpBank;
    float soTienPhaiThanhToanDuNoThangNayCuaHSBC;
    float soTienLaiSuatThangNayTPBank;
    float soTienLaiSuatThangNayHSBC;

    soTienLaiSuatThangNayTPBank = (tpBank * laiSuatHangThangCuaTheDuocTinhTPBank) / 12;
    soTienLaiSuatThangNayHSBC = (hsbc * laiSuatHangThangCuaTheDuocTinhHSBC) / 12;
    soTienPhaiThanhToanThangNayCuaTpBank = (tpBank - soTienLaiSuatThangNayTPBank) * laiSuatTPBankThanhToanDuNo;
    soTienPhaiThanhToanDuNoThangNayCuaHSBC = (hsbc - soTienLaiSuatThangNayHSBC) * laiSuatHSBCThanhToanDuNo;

    printf("So tien lai suat the ma ngan hang tinh thang nay của TPBank: %4.2f VND\n", soTienLaiSuatThangNayTPBank);
    printf("So tien lai suat the ma ngan hang tinh thang nay của HSBC: %4.2f VND\n", soTienLaiSuatThangNayHSBC);
    printf("So tien thang nay phai thanh toan du no tpBank thang nay: %4.2f VND\n", soTienPhaiThanhToanThangNayCuaTpBank);
    printf("So tien thang nay phai thanh toan du no HSBC thang nay: %4.2f VND\n", soTienPhaiThanhToanDuNoThangNayCuaHSBC);
}