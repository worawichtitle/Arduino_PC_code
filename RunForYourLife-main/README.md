# Physical Computing Project 2024 - IT KMITL
## สมาชิกกลุ่ม
66070214 อชิระ สุนทรบูรณสุข
<br> 66070180 วรวิชญ์ จุ่นพิจารณ์
<br> 66070185 วิชชญากร นาคงาม

## วัตถุประสงค์
Project ต้องการสร้างตัวจับเวลาสำหรับ เกมโชว์ ความบันเทิง การออกกำลังกาย และ การฝึกฝน ความสำคัญของโปรเจคคือ เพื่อจับเวลาให้ตรงความจริงให้ได้มากที่สุด คนที่ได้ประโยชน์ นักออกกำลังกาย ผู้จัดการแข่งขัน นักกีฬา ปัญหานี้แก้ไขได้โดย Project นี้จะใช้ censor ในการตรวจจับและหยุดเวลาทำให้ได้เวลาที่ใกล้เคียงความจริงที่สุด Input เวลาเริ่มต้น ภาพจากกล้อง Output เวลาสิ้นสุด และ ข้อมูลเวลา

## ความแปลกใหม่ของโครงงาน
### 1.การใช้กล้องเพื่อตรวจจับและหยุดเวลา: <br>
ปกติตัวจับเวลาทั่วไปมักใช้การกดปุ่มเริ่มและหยุดโดยผู้ใช้ แต่โปรเจคนี้ใช้กล้องตรวจจับการเคลื่อนไหวหรือสัญญาณจากผู้ใช้งาน เช่น นักกีฬา เพื่อเริ่มหยุดเวลาโดยอัตโนมัติ ทำให้เวลาที่วัดได้ใกล้เคียงกับความจริงมากที่สุด

### 2.การเชื่อมโยงกับภาพจากกล้อง: <br>
การใช้กล้องในการตรวจจับสถานการณ์หรือสภาพแวดล้อม เช่น จับภาพผู้ใช้งานขณะทำกิจกรรม แล้วนำข้อมูลจากกล้องมาวิเคราะห์เพื่อประมวลผลเวลา อาจช่วยเพิ่มความแม่นยำ ซึ่งแตกต่างจากการใช้แค่การจับเวลาแบบดั้งเดิม

### 3.ความแม่นยำสูงในการจับเวลาที่ใกล้เคียงความจริง: <br>
การใช้ข้อมูลจากกล้อง เพื่อให้ได้การจับเวลาที่แม่นยำและมีความเที่ยงตรงในระดับสูงเหมาะสมกับกิจกรรมที่ต้องใช้ความแม่นยำในการจับเวลา เช่น การแข่งขันกีฬา

### 4.การนำไปใช้ในหลายสถานการณ์: <br>
โปรเจคสามารถนำไปใช้ในหลายรูปแบบ ไม่ว่าจะเป็นสำหรับเกมโชว์ การแข่งขันกีฬา การฝึกซ้อม หรือการออกกำลังกาย ซึ่งทำให้โปรเจคนี้มีความยืดหยุ่นและสามารถตอบโจทย์การใช้งานได้หลายรูปแบบ