.data : AT(_text_end_)
{
	_data_start_ = .;
	*(.data)*
	_data_end_ = .;
	_data_load_ = LOADADDR (.data);
} > FLASH
