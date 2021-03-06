package jkadai06;

import java.util.ArrayList;
import java.util.HashMap;

public class Kadai0605 {
	public static void main(String[] args) {
		ArrayList<Employee> aryList = new ArrayList<>();

		aryList.add(new Employee(10,"東京太郎",300000,"SA","MA2")); // (1),(2)
		aryList.add(new Employee(20,"東京次郎",400000,"PL","MA1"));
		aryList.add(new Employee(30,"東京三郎",450000,"SA","MA1"));
		aryList.add(new Employee(40,"東京四郎",250000,"SA","MA3"));
		aryList.add(new Employee(50,"東京五郎",320000,"PL","MA2"));

		HashMap<String, String> department = new HashMap<>();

		department.put("SA", "営業部"); // (3),(4)
		department.put("PL", "企画部");

		HashMap<String, String> position = new HashMap<>();

		position.put("MA1", "部長"); // (5),(6)
		position.put("MA2", "課長");
		position.put("MA3", "係長");

		System.out.println("NO 氏名       給与 所属部 役職");
		System.out.println("-- -------- ------ ------ ----");
		for (Employee employee : aryList)
			System.out.println(
					employee.getNo() + " " +
					employee.getName() + " " +
					employee.getAllowance() + " " +
					department.get(employee.getDepartment()) + " " +
					position.get(employee.getPosition()));
	}
}

/*
【実行結果】
NO 氏名       給与 所属部 役職
-- -------- ------ ------ ----
10 東京太郎 300000 営業部 課長
20 東京次郎 400000 企画部 部長
30 東京三郎 450000 営業部 部長
40 東京四郎 250000 営業部 係長
50 東京五郎 320000 企画部 課長
*/