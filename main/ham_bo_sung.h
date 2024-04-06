#ifndef __HAM_BO_SUNG_H
#define __HAM_BO_SUNG_H
void ssd1306_init();
void task_ssd1306_display_text(const void *arg_text);
void task_ssd1306_display_clear(void *ignore);
void select_page(uint8_t page);
void set_horizontal_adressing_mode();
void ssd1306_fill_segment(uint8_t data);
void task_ssd1306_display_bitmap();
#endif