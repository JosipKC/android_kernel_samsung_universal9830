obj-$(CONFIG_PABLO_V7_0_0) += setup-is.o
obj-$(CONFIG_PABLO_V7_0_0) += setup-is-sensor.o
obj-$(CONFIG_PABLO_V7_0_0) += is-hw-pwr.o
obj-$(CONFIG_PABLO_V7_0_0) += is-hw-chain.o
ifeq ($(CONFIG_PM_DEVFREQ),y)
obj-$(CONFIG_PABLO_V7_0_0) += is-hw-dvfs.o
endif

obj-$(CONFIG_PABLO_V7_0_0) += is-subdev-3aa.o
obj-$(CONFIG_PABLO_V7_0_0) += is-subdev-3ac.o
obj-$(CONFIG_PABLO_V7_0_0) += is-subdev-3ap.o
obj-$(CONFIG_PABLO_V7_0_0) += is-subdev-3af.o
obj-$(CONFIG_PABLO_V7_0_0) += is-subdev-3ag.o
obj-$(CONFIG_PABLO_V7_0_0) += is-subdev-isp.o
obj-$(CONFIG_PABLO_V7_0_0) += is-subdev-ixc.o
obj-$(CONFIG_PABLO_V7_0_0) += is-subdev-ixp.o
obj-$(CONFIG_PABLO_V7_0_0) += is-subdev-mexc.o

obj-$(CONFIG_PABLO_V7_0_0) += is-subdev-mcs.o
obj-$(CONFIG_PABLO_V7_0_0) += is-subdev-mcsp.o
obj-$(CONFIG_PABLO_V7_0_0) += is-subdev-vra.o
obj-$(CONFIG_PABLO_V7_0_0) += is-subdev-paf.o
ifeq ($(CONFIG_USE_SENSOR_GROUP),y)
obj-$(CONFIG_PABLO_V7_0_0) += is-subdev-sensor.o
obj-$(CONFIG_PABLO_V7_0_0) += is-subdev-sensor_vc0.o
obj-$(CONFIG_PABLO_V7_0_0) += is-subdev-sensor_vc1.o
obj-$(CONFIG_PABLO_V7_0_0) += is-subdev-sensor_vc2.o
obj-$(CONFIG_PABLO_V7_0_0) += is-subdev-sensor_vc3.o
endif

EXTRA_CFLAGS += -Idrivers/media/platform/exynos/camera
EXTRA_CFLAGS += -Idrivers/media/platform/exynos/camera/include
