import pandas as pd
import matplotlib.pyplot as plt
import os

csv_path = "fir_gain_response.csv"

df = pd.read_csv(csv_path)

gain_mag_db = df["gain_mag_db"]
gain_phase_deg = df["gain_phase_deg"]

# Generate frequency values (normalized from 0 to 1)
frequency = df["frequency"] if "frequency" in df.columns else [i / (len(df) - 1) for i in range(len(df))]

# Plot gain magnitude (dB)
plt.figure(figsize=(18, 8), dpi=100)
plt.plot(frequency, gain_mag_db)
plt.xlabel("frequency (*π rad/sample)")
plt.ylabel("gain (dB)")
plt.title("FIR Filter Frequency Response(gain)")
plt.xlim(0, 1)
plt.ylim(-60, 10)
plt.grid(True)
plt.savefig("gain_magnitude_plot.png")

# Plot gain phase (degree)
plt.figure(figsize=(18, 8), dpi=100)
plt.plot(frequency, gain_phase_deg)
plt.xlabel("frequency (*π rad/sample)")
plt.ylabel("phase (degree)")
plt.title("FIR Filter Frequency Response(phase)")
plt.xlim(0, 1)
plt.grid(True)
plt.savefig("gain_phase_plot.png")

plt.close("all")


csv_path = "fir_square_response.csv"

df = pd.read_csv(csv_path)

din4_raw = df["din4"]
out13 = df["out13"]
ref = df["ref"]

din4_volt = din4_raw.map({0: -2048, 15: 1792}) / 4096.0
out13_volt = out13 / 4096.0
ref_volt = ref / 4096.0

cycles = list(range(192))

plt.figure(figsize=(18, 8), dpi=100)
plt.plot(cycles, din4_volt[:192], 'b:', label="Input Signal")
plt.plot(cycles, out13_volt[:192], 'g-', label="Verilog Filter Output")
plt.plot(cycles, ref_volt[:192], 'r-', label="C++ Reference Output")

plt.xlabel("Cycle")
plt.ylabel("Voltage (V)")
plt.title("FIR Filter Squarewave Response")
plt.xlim(0, 191)
plt.ylim(-1, 1)
plt.grid(True)
plt.legend()
plt.tight_layout()

# Save the plot
plt.savefig("fir_square_response_plot.png")
plt.close()
