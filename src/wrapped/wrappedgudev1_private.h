#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh....
#endif

//GO(g_udev_client_get_type, 
//GO(g_udev_client_new, 
//GO(g_udev_client_query_by_device_file, 
//GO(g_udev_client_query_by_device_number, 
//GO(g_udev_client_query_by_subsystem, 
//GO(g_udev_client_query_by_subsystem_and_name, 
//GO(g_udev_client_query_by_sysfs_path, 
//GO(g_udev_device_get_action, 
//GO(g_udev_device_get_device_file, 
//GO(g_udev_device_get_device_file_symlinks, 
//GO(g_udev_device_get_device_number, 
//GO(g_udev_device_get_device_type, 
//GO(g_udev_device_get_devtype, 
//GO(g_udev_device_get_driver, 
//GO(g_udev_device_get_name, 
//GO(g_udev_device_get_number, 
//GO(g_udev_device_get_parent, 
//GO(g_udev_device_get_parent_with_subsystem, 
//GO(g_udev_device_get_property, 
//GO(g_udev_device_get_property_as_boolean, 
//GO(g_udev_device_get_property_as_double, 
//GO(g_udev_device_get_property_as_int, 
//GO(g_udev_device_get_property_as_strv, 
//GO(g_udev_device_get_property_as_uint64, 
//GO(g_udev_device_get_property_keys, 
//GO(g_udev_device_get_seqnum, 
//GO(g_udev_device_get_subsystem, 
//GO(g_udev_device_get_sysfs_attr, 
//GO(g_udev_device_get_sysfs_attr_as_boolean, 
//GO(g_udev_device_get_sysfs_attr_as_double, 
//GO(g_udev_device_get_sysfs_attr_as_int, 
//GO(g_udev_device_get_sysfs_attr_as_strv, 
//GO(g_udev_device_get_sysfs_attr_as_uint64, 
//GO(g_udev_device_get_sysfs_path, 
//GO(g_udev_device_get_type, 
//GO(g_udev_device_has_property, 
//GO(g_udev_device_type_get_type, 
//GO(g_udev_marshal_VOID__STRING_OBJECT, 
