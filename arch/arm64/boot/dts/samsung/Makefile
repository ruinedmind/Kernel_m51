ifeq ($(CONFIG_BUILD_ARM64_DT_OVERLAY),y)
# M51(SM7150)
SEC_M51_EUR_DTBO := \
                sm7150-sec-m51-eur-overlay-r00.dtbo \
                sm7150-sec-m51-eur-overlay-r01.dtbo \
                sm7150-sec-m51-eur-overlay-r02.dtbo \
		sm7150-sec-m51-eur-overlay-r04.dtbo \
                sm7150-sec-m51-eur-overlay-r05.dtbo
                

define __sec_dtbo_build
dtbo-$(2) += $(1)
$(1)-base := $(3)
endef

define sec_dtbo_build
$(foreach dtbo, $(1), $(eval $(call __sec_dtbo_build, $(dtbo),$(2),$(3))))
endef

# SM7150 BASE DTB
SEC_SM7150_BASE_DTB := ../qcom/sdmmagpie.dtb

$(eval $(call sec_dtbo_build, \
		$(SEC_M51_EUR_DTBO),$(CONFIG_SEC_M51_EUR_PROJECT),$(SEC_SM7150_BASE_DTB)))

endif

ifeq ($(CONFIG_ARM64),y)
always          := $(dtb-y)
subdir-y        := $(dts-dirs)
else
targets += dtbs
targets += $(addprefix ../, $(dtb-y))

$(obj)/../%.dtb: $(src)/%.dts FORCE
        $(call if_changed_dep,dtc)

dtbs: $(addprefix $(obj)/../,$(dtb-y))
endif

clean-files := *.dtb *.reverse.dts *.dtbo
