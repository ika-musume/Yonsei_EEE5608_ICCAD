onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /tb_fir/clk
add wave -noupdate /tb_fir/rst_n
add wave -noupdate -radix unsigned /tb_fir/phase
add wave -noupdate /tb_fir/u_dut/clk
add wave -noupdate -format Analog-Step -height 50 -max 14.999999999999998 -radix unsigned /tb_fir/u_dut/din
add wave -noupdate -format Analog-Step -height 50 -max 14.999999999999998 -radix unsigned /tb_fir/u_dut/dout
add wave -noupdate -format Analog-Step -height 50 -max 14.999999999999998 -radix unsigned -childformat {{{/tb_fir/u_dut/dout_sat[3]} -radix decimal} {{/tb_fir/u_dut/dout_sat[2]} -radix decimal} {{/tb_fir/u_dut/dout_sat[1]} -radix decimal} {{/tb_fir/u_dut/dout_sat[0]} -radix decimal}} -expand -subitemconfig {{/tb_fir/u_dut/dout_sat[3]} {-height 15 -radix decimal} {/tb_fir/u_dut/dout_sat[2]} {-height 15 -radix decimal} {/tb_fir/u_dut/dout_sat[1]} {-height 15 -radix decimal} {/tb_fir/u_dut/dout_sat[0]} {-height 15 -radix decimal}} /tb_fir/u_dut/dout_sat
add wave -noupdate /tb_fir/u_dut/x
add wave -noupdate -radix decimal -childformat {{{/tb_fir/u_dut/ssum[0]} -radix decimal} {{/tb_fir/u_dut/ssum[1]} -radix decimal} {{/tb_fir/u_dut/ssum[2]} -radix decimal} {{/tb_fir/u_dut/ssum[3]} -radix decimal} {{/tb_fir/u_dut/ssum[4]} -radix decimal} {{/tb_fir/u_dut/ssum[5]} -radix decimal} {{/tb_fir/u_dut/ssum[6]} -radix decimal} {{/tb_fir/u_dut/ssum[7]} -radix decimal} {{/tb_fir/u_dut/ssum[8]} -radix decimal} {{/tb_fir/u_dut/ssum[9]} -radix decimal} {{/tb_fir/u_dut/ssum[10]} -radix decimal} {{/tb_fir/u_dut/ssum[11]} -radix decimal} {{/tb_fir/u_dut/ssum[12]} -radix decimal} {{/tb_fir/u_dut/ssum[13]} -radix decimal}} -subitemconfig {{/tb_fir/u_dut/ssum[0]} {-height 15 -radix decimal} {/tb_fir/u_dut/ssum[1]} {-height 15 -radix decimal} {/tb_fir/u_dut/ssum[2]} {-height 15 -radix decimal} {/tb_fir/u_dut/ssum[3]} {-height 15 -radix decimal} {/tb_fir/u_dut/ssum[4]} {-height 15 -radix decimal} {/tb_fir/u_dut/ssum[5]} {-height 15 -radix decimal} {/tb_fir/u_dut/ssum[6]} {-height 15 -radix decimal} {/tb_fir/u_dut/ssum[7]} {-height 15 -radix decimal} {/tb_fir/u_dut/ssum[8]} {-height 15 -radix decimal} {/tb_fir/u_dut/ssum[9]} {-height 15 -radix decimal} {/tb_fir/u_dut/ssum[10]} {-height 15 -radix decimal} {/tb_fir/u_dut/ssum[11]} {-height 15 -radix decimal} {/tb_fir/u_dut/ssum[12]} {-height 15 -radix decimal} {/tb_fir/u_dut/ssum[13]} {-height 15 -radix decimal}} /tb_fir/u_dut/ssum
add wave -noupdate -radix decimal -childformat {{{/tb_fir/u_dut/mul[0]} -radix decimal} {{/tb_fir/u_dut/mul[1]} -radix decimal} {{/tb_fir/u_dut/mul[2]} -radix decimal} {{/tb_fir/u_dut/mul[3]} -radix decimal} {{/tb_fir/u_dut/mul[4]} -radix decimal} {{/tb_fir/u_dut/mul[5]} -radix decimal} {{/tb_fir/u_dut/mul[6]} -radix decimal} {{/tb_fir/u_dut/mul[7]} -radix decimal} {{/tb_fir/u_dut/mul[8]} -radix decimal} {{/tb_fir/u_dut/mul[9]} -radix decimal} {{/tb_fir/u_dut/mul[10]} -radix decimal} {{/tb_fir/u_dut/mul[11]} -radix decimal} {{/tb_fir/u_dut/mul[12]} -radix decimal} {{/tb_fir/u_dut/mul[13]} -radix decimal}} -subitemconfig {{/tb_fir/u_dut/mul[0]} {-height 15 -radix decimal} {/tb_fir/u_dut/mul[1]} {-height 15 -radix decimal} {/tb_fir/u_dut/mul[2]} {-height 15 -radix decimal} {/tb_fir/u_dut/mul[3]} {-height 15 -radix decimal} {/tb_fir/u_dut/mul[4]} {-height 15 -radix decimal} {/tb_fir/u_dut/mul[5]} {-height 15 -radix decimal} {/tb_fir/u_dut/mul[6]} {-height 15 -radix decimal} {/tb_fir/u_dut/mul[7]} {-height 15 -radix decimal} {/tb_fir/u_dut/mul[8]} {-height 15 -radix decimal} {/tb_fir/u_dut/mul[9]} {-height 15 -radix decimal} {/tb_fir/u_dut/mul[10]} {-height 15 -radix decimal} {/tb_fir/u_dut/mul[11]} {-height 15 -radix decimal} {/tb_fir/u_dut/mul[12]} {-height 15 -radix decimal} {/tb_fir/u_dut/mul[13]} {-height 15 -radix decimal}} /tb_fir/u_dut/mul
add wave -noupdate -format Analog-Step -height 200 -max 2400.0 -min -2400.0 -radix decimal -childformat {{{/tb_fir/u_dut/dout_fullrange[12]} -radix decimal} {{/tb_fir/u_dut/dout_fullrange[11]} -radix decimal} {{/tb_fir/u_dut/dout_fullrange[10]} -radix decimal} {{/tb_fir/u_dut/dout_fullrange[9]} -radix decimal} {{/tb_fir/u_dut/dout_fullrange[8]} -radix decimal} {{/tb_fir/u_dut/dout_fullrange[7]} -radix decimal} {{/tb_fir/u_dut/dout_fullrange[6]} -radix decimal} {{/tb_fir/u_dut/dout_fullrange[5]} -radix decimal} {{/tb_fir/u_dut/dout_fullrange[4]} -radix decimal} {{/tb_fir/u_dut/dout_fullrange[3]} -radix decimal} {{/tb_fir/u_dut/dout_fullrange[2]} -radix decimal} {{/tb_fir/u_dut/dout_fullrange[1]} -radix decimal} {{/tb_fir/u_dut/dout_fullrange[0]} -radix decimal}} -subitemconfig {{/tb_fir/u_dut/dout_fullrange[12]} {-height 15 -radix decimal} {/tb_fir/u_dut/dout_fullrange[11]} {-height 15 -radix decimal} {/tb_fir/u_dut/dout_fullrange[10]} {-height 15 -radix decimal} {/tb_fir/u_dut/dout_fullrange[9]} {-height 15 -radix decimal} {/tb_fir/u_dut/dout_fullrange[8]} {-height 15 -radix decimal} {/tb_fir/u_dut/dout_fullrange[7]} {-height 15 -radix decimal} {/tb_fir/u_dut/dout_fullrange[6]} {-height 15 -radix decimal} {/tb_fir/u_dut/dout_fullrange[5]} {-height 15 -radix decimal} {/tb_fir/u_dut/dout_fullrange[4]} {-height 15 -radix decimal} {/tb_fir/u_dut/dout_fullrange[3]} {-height 15 -radix decimal} {/tb_fir/u_dut/dout_fullrange[2]} {-height 15 -radix decimal} {/tb_fir/u_dut/dout_fullrange[1]} {-height 15 -radix decimal} {/tb_fir/u_dut/dout_fullrange[0]} {-height 15 -radix decimal}} /tb_fir/u_dut/dout_fullrange
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {21189170 ns} 0}
quietly wave cursor active 1
configure wave -namecolwidth 150
configure wave -valuecolwidth 100
configure wave -justifyvalue left
configure wave -signalnamewidth 1
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits us
update
WaveRestoreZoom {0 ns} {85863680 ns}
