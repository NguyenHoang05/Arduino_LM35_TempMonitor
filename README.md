# Arduino LM35 Temperature Monitor

[![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)
[![GitHub last commit](https://img.shields.io/github/last-commit/NguyenHoang05/Arduino_LM35_TempMonitor)](https://github.com/NguyenHoang05/Arduino_LM35_TempMonitor)

**Môn học:** Mạng cảm biến – Tuần 03  
**Sinh viên:** Hồ Nguyễn Hoàng – N23DCCI026 – Lớp D23CQCI01-N

---

##  Mô tả dự án

Dự án này sử dụng vi điều khiển Arduino UNO và cảm biến nhiệt độ LM35 để đo nhiệt độ môi trường. Dữ liệu được gửi qua cổng Serial và hiển thị dưới dạng đồ thị thời gian thực trên máy tính. Hỗ trợ tối đa 3 kênh cảm biến LM35 trên các chân A0, A1, A2.

Dự án được quản lý phiên bản bằng Git và GitHub, áp dụng quy trình branch, pull request, xử lý conflict.

---

##  Tính năng

- Đọc nhiệt độ từ **1 đến 3 cảm biến LM35**.
- Xuất dữ liệu qua Serial dưới dạng **CSV** hoặc **JSON**.
- Ứng dụng PC (C# WinForms + ZedGraph) vẽ đồ thị nhiệt độ thời gian thực.
- Mô phỏng Proteus  .
- Quản lý phiên bản với Git: branch, merge, pull request.

---

## Phần cứng cần thiết

| Linh kiện          | Số lượng | Ghi chú                          |
|--------------------|----------|----------------------------------|
| Arduino UNO R3     | 1        | Hoặc bản tương thích             |
| Cảm biến LM35      | 1–3      | Độ chính xác ±0.5°C              |
| Dây nối (M–F, M–M) | vài cây  | Kết nối breadboard               |
| Breadboard         | 1        | 400 hoặc 830 điểm                |
| Máy tính           | 1        | Cài Arduino IDE, .NET Framework  |


##  Hướng dẫn sử dụng

### 1. Nạp firmware cho Arduino

- Mở file `firmware/LM35_TempReader/LM35_TempReader.ino` bằng Arduino IDE.
- Cắm Arduino UNO, chọn đúng cổng COM và board.
- Nhấn **Upload**.
- Mở Serial Monitor (9600 baud) để kiểm tra dữ liệu.

### 2. Chạy ứng dụng PC (C#)

- Vào thư mục `pc_app/`, mở file solution `.sln` bằng Visual Studio.
- Build và chạy (nhấn F5).
- Chọn đúng cổng COM mà Arduino đang kết nối.
- Nhấn **Start** để xem đồ thị nhiệt độ.

### 3. Mô phỏng (Proteus)

- Mở file `simulation/LM35_Simulation.pdsprj` (hoặc `.pdsprj`) bằng Proteus 8 Professional.
- Nhấn Play để chạy mô phỏng.

##  Cấu trúc thư mục
Arduino_LM35_TempMonitor/
├── .gitignore
├── README.md
├── docs/
├── firmware/
│   └── LM35_TempReader/
│       └── LM35_TempReader.ino
├── libs/
├── pc_app/
└── simulation/

## Tác giả
[Hồ Nguyễn Hoàng](https://NguyenHoang05.github.io) - Sinh viên PTIT

## Thành viên nhóm:

Hồ Nguyễn Hoàng - N23DCCI026 - D23CQCI01-N
Lý Việt Linh - N23CCCI039 - D23CQCI01-N


