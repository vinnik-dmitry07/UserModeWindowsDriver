EXTERN_C_START

typedef struct _QUEUE_CONTEXT {
    ULONG PrivateDeviceData;  
} QUEUE_CONTEXT, *PQUEUE_CONTEXT;

WDF_DECLARE_CONTEXT_TYPE_WITH_NAME(QUEUE_CONTEXT, QueueGetContext)

NTSTATUS
USBUMDF2DriverQueueInitialize(
    _In_ WDFDEVICE Device
);

EVT_WDF_IO_QUEUE_IO_DEVICE_CONTROL USBUMDF2DriverEvtIoDeviceControl;
EVT_WDF_IO_QUEUE_IO_STOP USBUMDF2DriverEvtIoStop;

EXTERN_C_END
