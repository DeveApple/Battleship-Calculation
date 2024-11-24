# Các bước thực hiện
1. Lưu các vị trí xuất hiện của các mảnh tàu
2. Xác định tính hợp lệ của của các vị trí chứa mảnh tàu đó
3. Nối các vị trí mảnh tàu để hình thành các vị trí chắc chắn xuất hiện
4. Đánh dấu các ô có khả năng xuất hiện mảnh tàu

# Bước 1: Lưu vị trí xuất hiện của các mảnh tàu
- Duyệt từng ô trong mảng, nếu thấy ô đó chứa mảnh tàu thì lưu vào map ship_piece
  + key: chỉ số mảnh tàu; value: pair x, y
(Có thể đưa bước này vào quá trình nhập các giá trị vào mảng board)

# Bước 2: Xác định tính hợp lệ của của các vị trí chứa mảnh tàu đó
## Xác định các ô chứa cùng mảnh tàu có nằm trên cùng hàng hay cột
- Duyệt với mỗi key của map ship_piece
  + Nếu các vị trí y của từng ô giống nhau: valid
  + Nếu các vị trí x của từng cô giống nhau: valid
  + Còn lại: Invalid
- Lưu hướng của tàu vào mảng ship_direction với chỉ số của mảng này là chỉ số của tàu
## Xác định các ô chứa mảnh tàu có khoảng cách vuọt quá chiều dài tàu
- Duyệt với mỗi key của map ship_piece
  - Nếu hướng tàu nằm ngang
    - Nếu giá trị x_i trừ x_0 (x nhỏ nhất của tàu) <= chiều dài tàu: valid
    - Nếu không: invalid
  - Nếu hướng tàu nằm dọc
    - Nếu giá trị y_i trừ y_0 (y nhỏ nhất của tàu) <= chiều dài tàu: valid
    - Nếu không: invalid
### Bước 3: Nối các vị trí mảnh tàu để hình thành các vị trí chắc chắn xuất hiện
(Tự làm)

### Bước 4: Đánh dấu các ô có khả năng xuất hiện mảnh tàu
Ý tưởng
- Lấy chiều dài tàu trừ chiều dài hiện tại để ra độ dài còn lại của tàu
- Xác định độ dài đó nằm bên nào của tàu
- Nếu không xác định được: invalid
- Đánh dấu vào mảng
