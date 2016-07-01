#include "hidapi.h"

int HID_API_EXPORT hid_init(void)
{
	return 0;
}

int HID_API_EXPORT hid_exit(void)
{
	return 0;
}

struct hid_device_info  HID_API_EXPORT *hid_enumerate(unsigned short vendor_id, unsigned short product_id)
{
	return NULL;
}

void  HID_API_EXPORT hid_free_enumeration(struct hid_device_info *devs)
{
    return;
}

hid_device * HID_API_EXPORT hid_open(unsigned short vendor_id, unsigned short product_id, const wchar_t *serial_number)
{
	return NULL;
}

hid_device * HID_API_EXPORT hid_open_path(const char *path)
{
	return NULL;
}

int HID_API_EXPORT hid_write(hid_device *dev, const unsigned char *data, size_t length)
{
    return 0;
}

int HID_API_EXPORT hid_read_timeout(hid_device *dev, unsigned char *data, size_t length, int milliseconds)
{
	return 0;
}

int HID_API_EXPORT hid_read(hid_device *dev, unsigned char *data, size_t length)
{
	return 0;
}

int HID_API_EXPORT hid_set_nonblocking(hid_device *dev, int nonblock)
{
	return 0;
}

int HID_API_EXPORT hid_send_feature_report(hid_device *dev, const unsigned char *data, size_t length)
{
	return 0;
}

int HID_API_EXPORT hid_get_feature_report(hid_device *dev, unsigned char *data, size_t length)
{
    return 0;
}

void HID_API_EXPORT hid_close(hid_device *dev)
{
}

int HID_API_EXPORT_CALL hid_get_manufacturer_string(hid_device *dev, wchar_t *string, size_t maxlen)
{
	return 0;
}

int HID_API_EXPORT_CALL hid_get_product_string(hid_device *dev, wchar_t *string, size_t maxlen)
{
	return 0;
}

int HID_API_EXPORT_CALL hid_get_serial_number_string(hid_device *dev, wchar_t *string, size_t maxlen)
{
	return 0;
}

int HID_API_EXPORT_CALL hid_get_indexed_string(hid_device *dev, int string_index, wchar_t *string, size_t maxlen)
{
	return 0;
}

HID_API_EXPORT const wchar_t * HID_API_CALL  hid_error(hid_device *dev)
{
	return NULL;
}
