{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": [],
      "authorship_tag": "ABX9TyMBjdFi6++aEqxyv2l8D8Pe",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/SakshamPatil009/DDS/blob/main/Day2.cpp\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "class Solution {\n",
        "public:\n",
        "    int search(vector<int>& nums, int target) {\n",
        "        int left = 0;\n",
        "        int right = nums.size() - 1;\n",
        "\n",
        "        while (left <= right) {\n",
        "            int mid = left + (right - left) / 2;  // avoid potential overflow\n",
        "\n",
        "            if (nums[mid] == target) {\n",
        "                return mid;\n",
        "            }\n",
        "            else if (nums[mid] < target) {\n",
        "                left = mid + 1;\n",
        "            }\n",
        "            else {\n",
        "                right = mid - 1;\n",
        "            }\n",
        "        }\n",
        "\n",
        "        return -1;\n",
        "    }\n",
        "\n",
        "};"
      ],
      "metadata": {
        "id": "UqVRHkWSkgDL"
      },
      "execution_count": null,
      "outputs": []
    }
  ]
}